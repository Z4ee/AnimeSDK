#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET_METHOD_4_196CAF261AAA51BD_OFFSET UNITYSDK_OFFSET(0x177BDDC0)
#define RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET_METHOD_4_98951F7E8C17894B_OFFSET UNITYSDK_OFFSET(0x177B3FC0)
#define RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchChessMoveTarget_TypeDefinitionIndex = 22167;

	class TargetFetchChessMoveTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_196CAF261AAA51BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessMoveTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET_METHOD_4_196CAF261AAA51BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98951F7E8C17894B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessMoveTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSMOVETARGET_METHOD_4_98951F7E8C17894B_OFFSET))(a1, a2);
		}
	};
}
