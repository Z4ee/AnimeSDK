#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D69BA30)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D69B8C0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D69B5B0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D69B860)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D69BB80)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69B630)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69BBC0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D69BD90)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D69C020)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D69C340)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D69BCF0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionQuestExcelTable_TypeDefinitionIndex = 12421;

	class ActivityTelevisionQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x44830);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x44838);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x44840);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x102F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x102F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityTelevisionQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
