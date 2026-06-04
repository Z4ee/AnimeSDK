#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET UNITYSDK_OFFSET(0x195D6960)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_62EDF975492A50FB_OFFSET UNITYSDK_OFFSET(0x195D6B20)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_C2A1171F702924FE_OFFSET UNITYSDK_OFFSET(0x195D6890)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_E991263612C321AF_OFFSET UNITYSDK_OFFSET(0x195D6AA0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET UNITYSDK_OFFSET(0x195D6910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySimulateSpeedUp_TypeDefinitionIndex = 22030;

	class BySimulateSpeedUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C2A1171F702924FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_C2A1171F702924FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_12C1839BEA098814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E991263612C321AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_E991263612C321AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62EDF975492A50FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_62EDF975492A50FB_OFFSET))(a1, a2);
		}
	};
}
