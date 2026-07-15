#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterNatureRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B725600)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B725490)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B725180)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B725430)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B725750)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B725200)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B725790)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B725960)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B725B00)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B725E20)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B7258C0)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B725820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNatureExcelTable_TypeDefinitionIndex = 12503;

	class CharacterNatureExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterNatureExcelTable_TypeDefinitionIndex)->GetStaticField(0x29DD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterNatureExcelTable_TypeDefinitionIndex)->GetStaticField(0x29DD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterNatureExcelTable_TypeDefinitionIndex)->GetStaticField(0x29DE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CharacterNatureExcelTable_TypeDefinitionIndex)->GetStaticField(0x79F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CharacterNatureExcelTable_TypeDefinitionIndex)->GetStaticField(0x79F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CharacterNatureRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CharacterNatureRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CharacterNatureRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterNatureRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
