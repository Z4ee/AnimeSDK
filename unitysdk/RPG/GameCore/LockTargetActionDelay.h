#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKTARGETACTIONDELAY_METHOD_3_18966F9CB1066E0A_OFFSET UNITYSDK_OFFSET(0x1BCD01B0)
#define RPG_GAMECORE_LOCKTARGETACTIONDELAY_METHOD_3_CBAE2A0A7344887D_OFFSET UNITYSDK_OFFSET(0x1BCD0200)
#define RPG_GAMECORE_LOCKTARGETACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD01F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockTargetActionDelay_TypeDefinitionIndex = 22632;

	class LockTargetActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Lock; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18966F9CB1066E0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETACTIONDELAY_METHOD_3_18966F9CB1066E0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBAE2A0A7344887D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETACTIONDELAY_METHOD_3_CBAE2A0A7344887D_OFFSET))(a1, a2);
		}
	};
}
