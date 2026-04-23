#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_METHOD_3_2CC97D6B4F160A48_OFFSET UNITYSDK_OFFSET(0x18E32FA0)
#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_METHOD_3_5A9CAB8EC608D54A_OFFSET UNITYSDK_OFFSET(0x18E33020)
#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E32FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGameplayBGMEmotionState_TypeDefinitionIndex = 19730;

	class SetGameplayBGMEmotionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean Reset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CC97D6B4F160A48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGameplayBGMEmotionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGameplayBGMEmotionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_METHOD_3_2CC97D6B4F160A48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A9CAB8EC608D54A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGameplayBGMEmotionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGameplayBGMEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_METHOD_3_5A9CAB8EC608D54A_OFFSET))(a1, a2);
		}
	};
}
