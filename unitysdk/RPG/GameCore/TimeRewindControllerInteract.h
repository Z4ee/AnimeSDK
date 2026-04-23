#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_29D5FFFB74B07D3B_OFFSET UNITYSDK_OFFSET(0x1909AD60)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_EB8AB12E7EB7DF2F_OFFSET UNITYSDK_OFFSET(0x1909AE70)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1909AE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindControllerInteract_TypeDefinitionIndex = 19622;

	class TimeRewindControllerInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29D5FFFB74B07D3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindControllerInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindControllerInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_29D5FFFB74B07D3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB8AB12E7EB7DF2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_METHOD_3_EB8AB12E7EB7DF2F_OFFSET))(a1, a2);
		}
	};
}
