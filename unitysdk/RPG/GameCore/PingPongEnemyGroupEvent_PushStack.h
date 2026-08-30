#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_METHOD_3_AAB148B80F8440B5_OFFSET UNITYSDK_OFFSET(0x1D3314F0)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_METHOD_3_EDC43DF8F5CDF2A1_OFFSET UNITYSDK_OFFSET(0x1D331290)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D331280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_PushStack_TypeDefinitionIndex = 16803;

	class PingPongEnemyGroupEvent_PushStack : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::UInt32 PushCount; // 0x10
		::Il2CppArray<::System::UInt32>* StackIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAB148B80F8440B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_METHOD_3_AAB148B80F8440B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDC43DF8F5CDF2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_METHOD_3_EDC43DF8F5CDF2A1_OFFSET))(a1, a2);
		}
	};
}
