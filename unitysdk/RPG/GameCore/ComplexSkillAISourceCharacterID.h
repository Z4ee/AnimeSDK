#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_E18FC9A8CB182139_OFFSET UNITYSDK_OFFSET(0x1D9AA9B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_F71DD5BD99087B23_OFFSET UNITYSDK_OFFSET(0x1D9AAA10)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AAA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceCharacterID_TypeDefinitionIndex = 15377;

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

		static ::System::Void Method_3_E18FC9A8CB182139(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_E18FC9A8CB182139_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F71DD5BD99087B23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_METHOD_3_F71DD5BD99087B23_OFFSET))(a1, a2);
		}
	};
}
