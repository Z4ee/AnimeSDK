#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionalRewardQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8B8320)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8B81B0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8B7EA0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8B8150)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8B84B0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B7F20)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B84F0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B86C0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8B8830)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8B8BA0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8B8620)
#define RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B8580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionalRewardQuestExcelTable_TypeDefinitionIndex = 14579;

	class OptionalRewardQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(OptionalRewardQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x52A10);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OptionalRewardQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x52A18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(OptionalRewardQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x52A20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(OptionalRewardQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OptionalRewardQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x128E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OptionalRewardQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::OptionalRewardQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::OptionalRewardQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::OptionalRewardQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OptionalRewardQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
