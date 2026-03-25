#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F03860)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F036B0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F03380)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F03650)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F039E0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F03400)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F03A20)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F03C00)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F04480)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F047A0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F03B60)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F03AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelExcelTable_TypeDefinitionIndex = 10483;

	class ActivityPanelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x103A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x103A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x103B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x5280);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x5281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPanelRow* GetData(::System::UInt32 PanelID)
		{
			return ((::RPG::GameCore::ActivityPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET))(PanelID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPanelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
