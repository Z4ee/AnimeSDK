#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComposeTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B01A750)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B01A5E0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B01A2D0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B01A580)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B01A8E0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B01A350)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B01A920)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B01AAF0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B01ACB0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B01B020)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B01AA50)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B01A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeTagExcelTable_TypeDefinitionIndex = 13345;

	class ItemComposeTagExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A920);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A928);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A930);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComposeTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemComposeTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComposeTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComposeTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
