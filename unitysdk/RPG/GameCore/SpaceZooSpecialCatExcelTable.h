#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D544320)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5441F0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D543EE0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D544190)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D544470)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D543F60)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5444B0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D544680)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D544B60)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D544E80)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5445E0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D544540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialCatExcelTable_TypeDefinitionIndex = 12283;

	class SpaceZooSpecialCatExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x20A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x20A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooSpecialCatRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooSpecialCatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooSpecialCatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
