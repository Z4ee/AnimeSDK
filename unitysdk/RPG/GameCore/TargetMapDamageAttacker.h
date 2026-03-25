#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_1B08C89D625DF99E_OFFSET UNITYSDK_OFFSET(0x177C2BC0)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_E3EC2DAE43ACA6F3_OFFSET UNITYSDK_OFFSET(0x177C2C80)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageAttacker_TypeDefinitionIndex = 22292;

	class TargetMapDamageAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B08C89D625DF99E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_1B08C89D625DF99E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3EC2DAE43ACA6F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_E3EC2DAE43ACA6F3_OFFSET))(a1, a2);
		}
	};
}
