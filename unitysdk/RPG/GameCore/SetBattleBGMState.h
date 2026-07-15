#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETBATTLEBGMSTATE_METHOD_3_0AEDD7381191F0A9_OFFSET UNITYSDK_OFFSET(0x1C2D40F0)
#define RPG_GAMECORE_SETBATTLEBGMSTATE_METHOD_3_5DC462D52124F97C_OFFSET UNITYSDK_OFFSET(0x1C2D40B0)
#define RPG_GAMECORE_SETBATTLEBGMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D40E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleBGMState_TypeDefinitionIndex = 22139;

	class SetBattleBGMState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StateName; // 0x18
		::System::Boolean InsertSpecial; // 0x20
		::RPG::GameCore::DynamicFloat* DelayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DC462D52124F97C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleBGMState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleBGMState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE_METHOD_3_5DC462D52124F97C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AEDD7381191F0A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleBGMState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE_METHOD_3_0AEDD7381191F0A9_OFFSET))(a1, a2);
		}
	};
}
