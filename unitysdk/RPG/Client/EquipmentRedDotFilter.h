#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EQUIPMENTREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEC5020)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xCEC3E80)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKEQUIPMENTREDDOT_OFFSET UNITYSDK_OFFSET(0xCEC4730)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKHASCANUSEEQUIPMENTANDRELIC_OFFSET UNITYSDK_OFFSET(0xCEC43E0)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKRELICREDDOT_OFFSET UNITYSDK_OFFSET(0xCEC4880)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC5360)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xCEC5120)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__TRYREFRESHITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xCEC5170)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentRedDotFilter_TypeDefinitionIndex = 66833;

	class EquipmentRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemMainType>* _ItemMainTypes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _ItemDataList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RelicQuickDressAvatarIDs; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* EquipmentTagAvatarIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* RelicSmartSuitAvatarIDs; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::RelicType>* _HasCanUseRelic; // 0x38
		::System::Boolean _HasCanUseEquipment; // 0x40
		::System::Boolean _NeedRefreshItems; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER_UPDATEREDDOT_OFFSET))(this, a1);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnItemChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__ONITEMCHANGED_OFFSET))(this, a1);
		}

		::System::Void _CheckHasCanUseEquipmentAndRelic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKHASCANUSEEQUIPMENTANDRELIC_OFFSET))(this);
		}

		::System::Void _TryRefreshItemDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__TRYREFRESHITEMDATALIST_OFFSET))(this);
		}

		::System::Void _CheckEquipmentRedDot(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKEQUIPMENTREDDOT_OFFSET))(this, a1);
		}

		::System::Void _CheckRelicRedDot(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKRELICREDDOT_OFFSET))(this, a1, a2);
		}
	};
}
