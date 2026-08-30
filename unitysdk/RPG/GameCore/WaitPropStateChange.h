#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_675D14FE7EC67C8F_OFFSET UNITYSDK_OFFSET(0x1D6A9FA0)
#define RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_730BD48F851AC702_OFFSET UNITYSDK_OFFSET(0x1D6A9F50)
#define RPG_GAMECORE_WAITPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChange_TypeDefinitionIndex = 20505;

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

		static ::System::Void Method_4_730BD48F851AC702(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_730BD48F851AC702_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_675D14FE7EC67C8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_METHOD_4_675D14FE7EC67C8F_OFFSET))(a1, a2);
		}
	};
}
