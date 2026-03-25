#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_675D14FE7EC67C8F_OFFSET UNITYSDK_OFFSET(0x17901B00)
#define RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_DE424BF29B9DA961_OFFSET UNITYSDK_OFFSET(0x17901A20)
#define RPG_GAMECORE_WAITPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17901AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChange_TypeDefinitionIndex = 19062;

	class WaitPropStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 InstanceID; // 0x20
		::RPG::GameCore::PropState FromState; // 0x24
		::System::Boolean FromAnyState; // 0x28
		::RPG::GameCore::PropState ToState; // 0x2C
		::System::Boolean ToAnyState; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DE424BF29B9DA961(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_DE424BF29B9DA961_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_675D14FE7EC67C8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_675D14FE7EC67C8F_OFFSET))(a1, a2);
		}
	};
}
