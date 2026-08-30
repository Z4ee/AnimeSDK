#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_METHOD_3_7F1977E5F5DA26AE_OFFSET UNITYSDK_OFFSET(0x1E153920)
#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_METHOD_3_F9D918A742F56F1B_OFFSET UNITYSDK_OFFSET(0x1E153260)
#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E153250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefServerPropState_TypeDefinitionIndex = 17334;

	class SwitchRefServerPropState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F1977E5F5DA26AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefServerPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefServerPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_METHOD_3_7F1977E5F5DA26AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9D918A742F56F1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefServerPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefServerPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_METHOD_3_F9D918A742F56F1B_OFFSET))(a1, a2);
		}
	};
}
