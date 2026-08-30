#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterCampConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CF8FBD0)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CF8FA60)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CF8F750)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CF8FA00)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CF8FD60)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CF8F7D0)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CF8FDA0)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF8FF70)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CF90240)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF905B0)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CF8FED0)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CF8FE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCampConfigExcelTable_TypeDefinitionIndex = 12609;

	class CharacterCampConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterCampConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterCampConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterCampConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CharacterCampConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8690);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CharacterCampConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterCampConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CharacterCampConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CharacterCampConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CharacterCampConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterCampConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
