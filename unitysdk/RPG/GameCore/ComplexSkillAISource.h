#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_C9DE6815EF87F921_OFFSET UNITYSDK_OFFSET(0x1D9AA5B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_D24733D4FBCA2435_OFFSET UNITYSDK_OFFSET(0x1D9A78D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A7910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISource_TypeDefinitionIndex = 15346;

	class ComplexSkillAISource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D24733D4FBCA2435(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_D24733D4FBCA2435_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C9DE6815EF87F921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_C9DE6815EF87F921_OFFSET))(a1, a2);
		}
	};
}
