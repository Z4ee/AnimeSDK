#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFeverTimeQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CA014F0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CA013C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CA010B0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CA01360)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CA01680)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CA01130)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CA016C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA01890)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CA01A90)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA01DB0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CA017F0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CA01750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex = 11574;

	class ActivityFeverTimeQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x419E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x419E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x419F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xFF30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xFF31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFeverTimeQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFeverTimeQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
