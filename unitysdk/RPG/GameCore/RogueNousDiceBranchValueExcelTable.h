#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDiceBranchValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BA1E90)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BA1D20)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BA1A10)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BA1CC0)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BA2060)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA1A90)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA20A0)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA2270)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BA24E0)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA2890)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BA21D0)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA2130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex = 14169;

	class RogueNousDiceBranchValueExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xF640);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xF648);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xF650);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x4DF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceBranchValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x4DF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceBranchValueRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueNousDiceBranchValueRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDiceBranchValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceBranchValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
