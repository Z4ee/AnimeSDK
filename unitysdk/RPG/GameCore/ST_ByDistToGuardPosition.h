#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_9EB71DE4AF08487D_OFFSET UNITYSDK_OFFSET(0x18DEC310)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_A764A4E4EF7394AD_OFFSET UNITYSDK_OFFSET(0x18DEC3E0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEC390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistToGuardPosition_TypeDefinitionIndex = 18992;

	class ST_ByDistToGuardPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_ParamType ValueType; // 0x20
		::System::Single MinValue; // 0x24
		::System::Single MaxValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9EB71DE4AF08487D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_9EB71DE4AF08487D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A764A4E4EF7394AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_A764A4E4EF7394AD_OFFSET))(a1, a2);
		}
	};
}
