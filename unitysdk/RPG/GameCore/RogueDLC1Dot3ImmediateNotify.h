#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLC1Dot3ImmediateNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_472D8FF81A1807B1_OFFSET UNITYSDK_OFFSET(0x18CFD880)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_56168A33A5F56672_OFFSET UNITYSDK_OFFSET(0x18CFD800)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFD850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3ImmediateNotify_TypeDefinitionIndex = 21148;

	class RogueDLC1Dot3ImmediateNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3ImmediateNotifyType NotifyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56168A33A5F56672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_56168A33A5F56672_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_472D8FF81A1807B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_472D8FF81A1807B1_OFFSET))(a1, a2);
		}
	};
}
