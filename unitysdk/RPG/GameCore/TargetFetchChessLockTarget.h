#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET_METHOD_4_9196935B20BE003B_OFFSET UNITYSDK_OFFSET(0x177BDC90)
#define RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET_METHOD_4_D65170BFAF49B79D_OFFSET UNITYSDK_OFFSET(0x177B3D80)
#define RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchChessLockTarget_TypeDefinitionIndex = 22165;

	class TargetFetchChessLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9196935B20BE003B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET_METHOD_4_9196935B20BE003B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D65170BFAF49B79D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSLOCKTARGET_METHOD_4_D65170BFAF49B79D_OFFSET))(a1, a2);
		}
	};
}
