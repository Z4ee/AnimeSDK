#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConvinceGameplaySkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1967C4C0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1967C350)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1967C040)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1967C2F0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1967C650)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1967C0C0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1967C690)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1967C860)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1967CB10)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967CE80)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1967C7C0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1967C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex = 12466;

	class ConvinceGameplaySkillConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5250);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplaySkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConvinceGameplaySkillConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ConvinceGameplaySkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConvinceGameplaySkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConvinceGameplaySkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
