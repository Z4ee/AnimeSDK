#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERDISABLELOOKAT_METHOD_3_7823915566E3CD29_OFFSET UNITYSDK_OFFSET(0x1D120930)
#define RPG_GAMECORE_CHARACTERDISABLELOOKAT_METHOD_3_F0D8B495BE9A7B3C_OFFSET UNITYSDK_OFFSET(0x1D1208E0)
#define RPG_GAMECORE_CHARACTERDISABLELOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D120920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDisableLookAt_TypeDefinitionIndex = 20628;

	class CharacterDisableLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean Disable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0D8B495BE9A7B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterDisableLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterDisableLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT_METHOD_3_F0D8B495BE9A7B3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7823915566E3CD29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterDisableLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterDisableLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT_METHOD_3_7823915566E3CD29_OFFSET))(a1, a2);
		}
	};
}
