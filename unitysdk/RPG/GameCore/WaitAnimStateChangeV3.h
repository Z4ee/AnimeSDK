#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGEV3_METHOD_4_CC8325DC55F33A8F_OFFSET UNITYSDK_OFFSET(0x1D69EF60)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV3_METHOD_4_FACD0A6E4828D2F3_OFFSET UNITYSDK_OFFSET(0x1D69EFB0)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69EFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateChangeV3_TypeDefinitionIndex = 22049;

	class WaitAnimStateChangeV3 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* StateName; // 0x20
		::System::Boolean IsEnter; // 0x28
		::System::Boolean IsTransitionIn; // 0x29
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC8325DC55F33A8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChangeV3*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChangeV3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3_METHOD_4_CC8325DC55F33A8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FACD0A6E4828D2F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3_METHOD_4_FACD0A6E4828D2F3_OFFSET))(a1, a2);
		}
	};
}
