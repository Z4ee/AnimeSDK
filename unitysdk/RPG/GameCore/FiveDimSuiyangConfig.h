#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_METHOD_3_2748BADC9035E714_OFFSET UNITYSDK_OFFSET(0x1BEB5DF0)
#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_METHOD_3_AFD4799B722EF813_OFFSET UNITYSDK_OFFSET(0x1BEB5DB0)
#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSuiyangConfig_TypeDefinitionIndex = 18093;

	class FiveDimSuiyangConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSuiyang; // 0x10
		::System::Single Speed; // 0x14
		::RPG::MVector2 InitDirection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFD4799B722EF813(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSuiyangConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSuiyangConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_METHOD_3_AFD4799B722EF813_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2748BADC9035E714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSuiyangConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSuiyangConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_METHOD_3_2748BADC9035E714_OFFSET))(a1, a2);
		}
	};
}
