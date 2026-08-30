#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_07FAD046819A39E1_OFFSET UNITYSDK_OFFSET(0x1CCDCC80)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_3130CE4B5A43767D_OFFSET UNITYSDK_OFFSET(0x1CCDCE30)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_AE5270B06B0F67E4_OFFSET UNITYSDK_OFFSET(0x1CCDCC40)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_D33649BE8A8F6C9B_OFFSET UNITYSDK_OFFSET(0x1CCDCE00)
#define RPG_GAMECORE_RTBYHASLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDCC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasLockTarget_TypeDefinitionIndex = 23958;

	class RtByHasLockTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE5270B06B0F67E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_AE5270B06B0F67E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07FAD046819A39E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_07FAD046819A39E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D33649BE8A8F6C9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_D33649BE8A8F6C9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3130CE4B5A43767D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_METHOD_4_3130CE4B5A43767D_OFFSET))(a1, a2);
		}
	};
}
