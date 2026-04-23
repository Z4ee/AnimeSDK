#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_EEF1F6175938819B_OFFSET UNITYSDK_OFFSET(0x1882F990)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_F71DD5BD99087B23_OFFSET UNITYSDK_OFFSET(0x1882CC90)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1882CC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceCharacterID_TypeDefinitionIndex = 14716;

	class ComplexSkillAISourceCharacterID : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::String* CharacterIDGroup; // 0x18
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EEF1F6175938819B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_EEF1F6175938819B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F71DD5BD99087B23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_F71DD5BD99087B23_OFFSET))(a1, a2);
		}
	};
}
