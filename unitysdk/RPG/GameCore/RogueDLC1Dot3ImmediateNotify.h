#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLC1Dot3ImmediateNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_472D8FF81A1807B1_OFFSET UNITYSDK_OFFSET(0x1C4B0020)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_BED8FB006B5BC122_OFFSET UNITYSDK_OFFSET(0x1C4AFFE0)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3ImmediateNotify_TypeDefinitionIndex = 21462;

	class RogueDLC1Dot3ImmediateNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3ImmediateNotifyType NotifyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BED8FB006B5BC122(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_BED8FB006B5BC122_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_472D8FF81A1807B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_METHOD_3_472D8FF81A1807B1_OFFSET))(a1, a2);
		}
	};
}
