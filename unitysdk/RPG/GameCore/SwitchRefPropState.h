#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHREFPROPSTATE_METHOD_3_95C4C2C38FED2288_OFFSET UNITYSDK_OFFSET(0x18EBF970)
#define RPG_GAMECORE_SWITCHREFPROPSTATE_METHOD_3_A6A2294FBB2C9ADD_OFFSET UNITYSDK_OFFSET(0x18EC0070)
#define RPG_GAMECORE_SWITCHREFPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBF960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefPropState_TypeDefinitionIndex = 16639;

	class SwitchRefPropState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::UInt32 InstanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6A2294FBB2C9ADD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE_METHOD_3_A6A2294FBB2C9ADD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95C4C2C38FED2288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE_METHOD_3_95C4C2C38FED2288_OFFSET))(a1, a2);
		}
	};
}
