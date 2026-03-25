#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_1173F12C314F35F1_OFFSET UNITYSDK_OFFSET(0x177BE100)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_9A6BBF47038AF20F_OFFSET UNITYSDK_OFFSET(0x177B4560)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x177B4510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageAttacker_TypeDefinitionIndex = 22285;

	class TargetFetchCurrentDamageAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1173F12C314F35F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_1173F12C314F35F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A6BBF47038AF20F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_9A6BBF47038AF20F_OFFSET))(a1, a2);
		}
	};
}
