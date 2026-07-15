#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_89027FBB497168C7_OFFSET UNITYSDK_OFFSET(0x1AE4A450)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_DDAA44F280DF770C_OFFSET UNITYSDK_OFFSET(0x1AE4A3F0)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitingEventBase_TypeDefinitionIndex = 19903;

	class AdvWaitingEventBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDAA44F280DF770C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitingEventBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_DDAA44F280DF770C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89027FBB497168C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitingEventBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_89027FBB497168C7_OFFSET))(a1, a2);
		}
	};
}
