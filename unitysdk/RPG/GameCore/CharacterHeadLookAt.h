#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADLOOKAT_METHOD_3_4C6DBD36A1A6B8D2_OFFSET UNITYSDK_OFFSET(0x187D1D50)
#define RPG_GAMECORE_CHARACTERHEADLOOKAT_METHOD_3_7DA8D231D3282CC8_OFFSET UNITYSDK_OFFSET(0x187D1CB0)
#define RPG_GAMECORE_CHARACTERHEADLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x187D1D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadLookAt_TypeDefinitionIndex = 19850;

	class CharacterHeadLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::System::String* TargetCharacterAttachPoint; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::Boolean KeepTracking; // 0x40
		::System::Single Duration; // 0x44
		::System::String* CurveName; // 0x48
		::RPG::GameCore::CharacterHeadConstraint* Constraint; // 0x50
		::System::Boolean WaitUntilFinish; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DA8D231D3282CC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT_METHOD_3_7DA8D231D3282CC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C6DBD36A1A6B8D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT_METHOD_3_4C6DBD36A1A6B8D2_OFFSET))(a1, a2);
		}
	};
}
