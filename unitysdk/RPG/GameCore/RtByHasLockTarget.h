#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_07FAD046819A39E1_OFFSET UNITYSDK_OFFSET(0x18DC8C00)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_5105035168237F57_OFFSET UNITYSDK_OFFSET(0x18DC8B30)
#define RPG_GAMECORE_RTBYHASLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC8BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasLockTarget_TypeDefinitionIndex = 23242;

	class RtByHasLockTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5105035168237F57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_5105035168237F57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07FAD046819A39E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_07FAD046819A39E1_OFFSET))(a1, a2);
		}
	};
}
