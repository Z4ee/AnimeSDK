#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REWINDTIMEREWINDTARGET_METHOD_3_2749CF8183B8490E_OFFSET UNITYSDK_OFFSET(0x175B0540)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGET_METHOD_3_4852733CF280FA5F_OFFSET UNITYSDK_OFFSET(0x175B04C0)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x175B0510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewindTimeRewindTarget_TypeDefinitionIndex = 18969;

	class RewindTimeRewindTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4852733CF280FA5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewindTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewindTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET_METHOD_3_4852733CF280FA5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2749CF8183B8490E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewindTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewindTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET_METHOD_3_2749CF8183B8490E_OFFSET))(a1, a2);
		}
	};
}
