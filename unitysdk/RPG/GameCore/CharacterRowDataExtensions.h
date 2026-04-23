#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_1_OFFSET UNITYSDK_OFFSET(0xB60A010)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xB609C50)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_1_OFFSET UNITYSDK_OFFSET(0xB609F00)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xB609AA0)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_1_OFFSET UNITYSDK_OFFSET(0xB609DB0)
#define RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xB609A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterRowDataExtensions_TypeDefinitionIndex = 52459;

	class CharacterRowDataExtensions : public ::System::Object
	{
	public:
		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillDatas, ::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_OFFSET))(skillDatas, nSkillIndex);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillDatas, ::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_OFFSET))(skillDatas, skillName);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillDatas, ::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_OFFSET))(skillDatas, skillID);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData_1(::RPG::GameCore::CharacterDataComponent* characterData, ::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATA_1_OFFSET))(characterData, nSkillIndex);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName_1(::RPG::GameCore::CharacterDataComponent* characterData, ::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYNAME_1_OFFSET))(characterData, skillName);
		}

		static ::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID_1(::RPG::GameCore::CharacterDataComponent* characterData, ::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::RPG::GameCore::CharacterDataComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERROWDATAEXTENSIONS_GETSKILLROWDATABYID_1_OFFSET))(characterData, skillID);
		}
	};
}
