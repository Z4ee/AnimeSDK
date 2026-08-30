#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_1_OFFSET UNITYSDK_OFFSET(0x1224AF40)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x1224A9A0)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_1_OFFSET UNITYSDK_OFFSET(0x1224AD70)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x1224A760)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_1_OFFSET UNITYSDK_OFFSET(0x1224ABA0)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x1224A6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterRowDataExtensions_TypeDefinitionIndex = 57094;

	class CharacterRowDataExtensions : public ::System::Object
	{
	public:
		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData_1(::RPG::GameCore::CharacterDataComponent* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName_1(::RPG::GameCore::CharacterDataComponent* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID_1(::RPG::GameCore::CharacterDataComponent* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_1_OFFSET))(a1, a2);
		}
	};
}
