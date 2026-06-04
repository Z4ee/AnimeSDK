#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEROGUEENTER_METHOD_3_3F80DA2054B12D03_OFFSET UNITYSDK_OFFSET(0x196E58C0)
#define RPG_GAMECORE_ENABLEROGUEENTER_METHOD_3_DD4D63303B5AA3CC_OFFSET UNITYSDK_OFFSET(0x196E5930)
#define RPG_GAMECORE_ENABLEROGUEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x196E5900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRogueEnter_TypeDefinitionIndex = 19344;

	class EnableRogueEnter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F80DA2054B12D03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRogueEnter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRogueEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER_METHOD_3_3F80DA2054B12D03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD4D63303B5AA3CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRogueEnter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRogueEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER_METHOD_3_DD4D63303B5AA3CC_OFFSET))(a1, a2);
		}
	};
}
