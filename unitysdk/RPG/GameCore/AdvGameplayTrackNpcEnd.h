#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_4F9DC0ED6FA2F112_OFFSET UNITYSDK_OFFSET(0x1CDCB1B0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_D706484C9E9B2B8F_OFFSET UNITYSDK_OFFSET(0x1CDCB280)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCB270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcEnd_TypeDefinitionIndex = 21940;

	class AdvGameplayTrackNpcEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F9DC0ED6FA2F112(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_4F9DC0ED6FA2F112_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D706484C9E9B2B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_D706484C9E9B2B8F_OFFSET))(a1, a2);
		}
	};
}
