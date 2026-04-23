#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET UNITYSDK_OFFSET(0x18746270)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_D1FF48EB1D9404C7_OFFSET UNITYSDK_OFFSET(0x187461A0)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18746220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityOriginalEraConfig_TypeDefinitionIndex = 21213;

	class ByEntityOriginalEraConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1FF48EB1D9404C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_D1FF48EB1D9404C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1765F9201E875351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET))(a1, a2);
		}
	};
}
