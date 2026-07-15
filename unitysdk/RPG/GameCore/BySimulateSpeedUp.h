#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET UNITYSDK_OFFSET(0x1B2B8F30)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_23ADC9E1848B0D1F_OFFSET UNITYSDK_OFFSET(0x1B2B90A0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_773B2DD96C94A26F_OFFSET UNITYSDK_OFFSET(0x1B2B8EF0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_A3351B9575A87ECA_OFFSET UNITYSDK_OFFSET(0x1B2B9070)
#define RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B8F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySimulateSpeedUp_TypeDefinitionIndex = 22466;

	class BySimulateSpeedUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_773B2DD96C94A26F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_773B2DD96C94A26F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_12C1839BEA098814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3351B9575A87ECA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_A3351B9575A87ECA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23ADC9E1848B0D1F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_23ADC9E1848B0D1F_OFFSET))(a1, a2);
		}
	};
}
