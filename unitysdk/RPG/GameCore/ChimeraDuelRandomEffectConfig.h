#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_METHOD_3_6C48E30EA6978AAF_OFFSET UNITYSDK_OFFSET(0x1C245770)
#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_METHOD_3_CB7095B9C6BCB8EB_OFFSET UNITYSDK_OFFSET(0x1C2457D0)
#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2457C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRandomEffectConfig_TypeDefinitionIndex = 15398;

	class ChimeraDuelRandomEffectConfig : public ::RPG::GameCore::ChimeraDuelEffectConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* RandomValueGetter; // 0x20
		::System::Boolean IsAffectByAttribute; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C48E30EA6978AAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRandomEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRandomEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_METHOD_3_6C48E30EA6978AAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB7095B9C6BCB8EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRandomEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRandomEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_METHOD_3_CB7095B9C6BCB8EB_OFFSET))(a1, a2);
		}
	};
}
