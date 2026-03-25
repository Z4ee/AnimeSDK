#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_METHOD_4_4382FB9462241000_OFFSET UNITYSDK_OFFSET(0x17900280)
#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_METHOD_4_CD6C014C622438B8_OFFSET UNITYSDK_OFFSET(0x17900360)
#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17900300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerPassBubbleBridge_TypeDefinitionIndex = 20502;

	class WaitPlayerPassBubbleBridge : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4382FB9462241000(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_METHOD_4_4382FB9462241000_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD6C014C622438B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_METHOD_4_CD6C014C622438B8_OFFSET))(a1, a2);
		}
	};
}
