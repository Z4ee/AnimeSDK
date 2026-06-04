#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooMutationMaterialRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C950D0)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19C94FA0)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19C94C90)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19C94F40)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19C95220)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C94D10)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19C95260)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C95430)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19C956C0)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C959E0)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19C95390)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C952F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex = 11792;

	class SpaceZooMutationMaterialExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x4DFB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x4DFB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x4DFC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0xF010);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooMutationMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0xF011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooMutationMaterialRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooMutationMaterialRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooMutationMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooMutationMaterialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooMutationMaterialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
