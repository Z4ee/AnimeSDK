#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER_METHOD_3_549B574BA222D364_OFFSET UNITYSDK_OFFSET(0x178894A0)
#define RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER_METHOD_3_72B463B2728283F2_OFFSET UNITYSDK_OFFSET(0x1789F8D0)
#define RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x17889470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindLoopControlStateChangeListener_TypeDefinitionIndex = 18986;

	class TimeRewindLoopControlStateChangeListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72B463B2728283F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER_METHOD_3_72B463B2728283F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_549B574BA222D364(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDLOOPCONTROLSTATECHANGELISTENER_METHOD_3_549B574BA222D364_OFFSET))(a1, a2);
		}
	};
}
