#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEffectParam; }

#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIG_METHOD_2_845A2BDC99806D42_OFFSET UNITYSDK_OFFSET(0x1CFC3A50)
#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIG_METHOD_2_B38A12E5AF6B1D1A_OFFSET UNITYSDK_OFFSET(0x1CFC07E0)
#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC3A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectConfig_TypeDefinitionIndex = 15834;

	class ChimeraDuelEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelEffectType EffectType; // 0x10
		::RPG::GameCore::BaseChimeraDuelEffectParam* EffectParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B38A12E5AF6B1D1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIG_METHOD_2_B38A12E5AF6B1D1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_845A2BDC99806D42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIG_METHOD_2_845A2BDC99806D42_OFFSET))(a1, a2);
		}
	};
}
