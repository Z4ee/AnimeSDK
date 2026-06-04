#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_7_69154F2F31660256_OFFSET UNITYSDK_OFFSET(0x19BC7780)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_7_CC908D8C6E285541_OFFSET UNITYSDK_OFFSET(0x19BC7720)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC7770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterTopKBuffTypeConfig_TypeDefinitionIndex = 18542;

	class RogueTournFormulaCondFilterTopKBuffTypeConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_CC908D8C6E285541(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_7_CC908D8C6E285541_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_69154F2F31660256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_7_69154F2F31660256_OFFSET))(a1, a2);
		}
	};
}
