#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITPROPSTATECHANGEV2_METHOD_4_74AD34358240AA05_OFFSET UNITYSDK_OFFSET(0x17901FE0)
#define RPG_GAMECORE_WAITPROPSTATECHANGEV2_METHOD_4_EBC9FED13848E32B_OFFSET UNITYSDK_OFFSET(0x179020C0)
#define RPG_GAMECORE_WAITPROPSTATECHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x17902060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChangeV2_TypeDefinitionIndex = 19063;

	class WaitPropStateChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74AD34358240AA05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEV2_METHOD_4_74AD34358240AA05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBC9FED13848E32B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEV2_METHOD_4_EBC9FED13848E32B_OFFSET))(a1, a2);
		}
	};
}
