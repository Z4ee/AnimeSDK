#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhoneThemeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A01C80)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A01B10)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A01800)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A01AB0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A01E10)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A01880)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A01E50)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A02020)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A022B0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A02620)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A01F80)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A01EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneThemeExcelTable_TypeDefinitionIndex = 13755;

	class PhoneThemeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeExcelTable_TypeDefinitionIndex)->GetStaticField(0x35880);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeExcelTable_TypeDefinitionIndex)->GetStaticField(0x35888);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>**)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeExcelTable_TypeDefinitionIndex)->GetStaticField(0x35890);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeExcelTable_TypeDefinitionIndex)->GetStaticField(0xA960);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeExcelTable_TypeDefinitionIndex)->GetStaticField(0xA961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PhoneThemeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PhoneThemeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PhoneThemeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhoneThemeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
