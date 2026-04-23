#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PUNKLORDSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF25560)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordScore_TypeDefinitionIndex = 61477;

	class PunkLordScore : public ::System::Object
	{
	public:
		::System::UInt32 SelfMonsterScore; // 0x10
		::System::UInt32 DamageScore; // 0x14
		::System::UInt32 KillScore; // 0x18
		::System::UInt32 AssistScore; // 0x1C
		::System::UInt32 FinalHitScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDSCORE__CTOR_OFFSET))(this);
		}
	};
}
