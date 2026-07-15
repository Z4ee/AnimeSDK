#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_7BCD50ADE4A43EB2_OFFSET UNITYSDK_OFFSET(0x1C152650)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_EB8AB12E7EB7DF2F_OFFSET UNITYSDK_OFFSET(0x1C152720)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C152710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindControllerInteract_TypeDefinitionIndex = 19867;

	class TimeRewindControllerInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7BCD50ADE4A43EB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindControllerInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindControllerInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_7BCD50ADE4A43EB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB8AB12E7EB7DF2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_EB8AB12E7EB7DF2F_OFFSET))(a1, a2);
		}
	};
}
