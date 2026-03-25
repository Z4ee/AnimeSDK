#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET UNITYSDK_OFFSET(0x170332F0)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_B637CD89E571485E_OFFSET UNITYSDK_OFFSET(0x17033220)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x170332A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageBuffAffectCurrentWave_TypeDefinitionIndex = 21752;

	class ByIsStageBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B637CD89E571485E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_B637CD89E571485E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A499F236759CEF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET))(a1, a2);
		}
	};
}
