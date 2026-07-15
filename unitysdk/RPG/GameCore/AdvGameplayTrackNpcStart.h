#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_2689B526D43AA5AA_OFFSET UNITYSDK_OFFSET(0x1BE1EAB0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_34AE888630EC1047_OFFSET UNITYSDK_OFFSET(0x1BE1E9E0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcStart_TypeDefinitionIndex = 21378;

	class AdvGameplayTrackNpcStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34AE888630EC1047(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_34AE888630EC1047_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2689B526D43AA5AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_2689B526D43AA5AA_OFFSET))(a1, a2);
		}
	};
}
