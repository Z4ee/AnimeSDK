#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_5320EA8EFD2E9C7A_OFFSET UNITYSDK_OFFSET(0x17037750)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_8FA2E9E56FF4D4A0_OFFSET UNITYSDK_OFFSET(0x17037820)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x170377D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamCurrentActionAnyDirection_TypeDefinitionIndex = 18289;

	class ByPamCurrentActionAnyDirection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5320EA8EFD2E9C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_5320EA8EFD2E9C7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FA2E9E56FF4D4A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_8FA2E9E56FF4D4A0_OFFSET))(a1, a2);
		}
	};
}
