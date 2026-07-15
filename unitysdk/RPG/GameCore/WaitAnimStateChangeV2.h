#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGEV2_METHOD_4_27D31F5A063BCF1E_OFFSET UNITYSDK_OFFSET(0x1B8A05E0)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV2_METHOD_4_6441EDDB2DD17BD7_OFFSET UNITYSDK_OFFSET(0x1B8A0630)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A0620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateChangeV2_TypeDefinitionIndex = 21486;

	class WaitAnimStateChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* StateName; // 0x20
		::System::Boolean IsEnter; // 0x28
		::System::Boolean IsTransitionIn; // 0x29
		::System::Boolean IsListenAllLayer; // 0x2A
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_27D31F5A063BCF1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2_METHOD_4_27D31F5A063BCF1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6441EDDB2DD17BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2_METHOD_4_6441EDDB2DD17BD7_OFFSET))(a1, a2);
		}
	};
}
