#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookReijuCollection; }
namespace RPG::Client { class FateReijuDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCF51210)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xCF51D90)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_GETDAYINDEXDICT_OFFSET UNITYSDK_OFFSET(0xCF51AA0)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCF51790)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUID_OFFSET UNITYSDK_OFFSET(0xCF51770)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUNAME_OFFSET UNITYSDK_OFFSET(0xCF51950)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUTYPE_OFFSET UNITYSDK_OFFSET(0xCF51840)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_SPAWNINDEXARRAY_OFFSET UNITYSDK_OFFSET(0xCF51660)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_ISSPAWNINDEXAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCF515F0)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM_SET_REIJUID_OFFSET UNITYSDK_OFFSET(0xCF51780)
#define RPG_CLIENT_FATEHANDBOOKREIJUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF515E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookReijuItem_TypeDefinitionIndex = 64138;

	class FateHandbookReijuItem : public ::System::Object
	{
	public:
		::RPG::Client::FateHandbookReijuCollection* _BelongCollection; // 0x10
		::RPG::Client::FateReijuDataItem* _ReijuDisplayData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GetDayIndexDict; // 0x20
		::System::UInt32 _ReijuID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateHandbookReijuItem* Create(::System::UInt32 a1, ::RPG::Client::FateHandbookReijuCollection* a2)
		{
			return ((::RPG::Client::FateHandbookReijuItem*(*)(::System::UInt32, ::RPG::Client::FateHandbookReijuCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean IsSpawnIndexAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_ISSPAWNINDEXAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReijuID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUID_OFFSET))(this);
		}

		::System::Void set_ReijuID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_SET_REIJUID_OFFSET))(this, a1);
		}

		::RPG::Client::FateReijuDataItem* get_ReijuDisplayData()
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUDISPLAYDATA_OFFSET))(this);
		}

		::RPG::GameCore::FateReijuType get_ReijuType()
		{
			return ((::RPG::GameCore::FateReijuType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ReijuName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_REIJUNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpawnIndexArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_SPAWNINDEXARRAY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_GetDayIndexDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_GETDAYINDEXDICT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUITEM_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}
	};
}
