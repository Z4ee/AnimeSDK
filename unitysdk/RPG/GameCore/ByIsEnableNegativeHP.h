#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_5346EA3B7DB2F439_OFFSET UNITYSDK_OFFSET(0x1702D060)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_B9C5056E6E0F4C77_OFFSET UNITYSDK_OFFSET(0x1702D130)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1702D0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnableNegativeHP_TypeDefinitionIndex = 21965;

	class ByIsEnableNegativeHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5346EA3B7DB2F439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_5346EA3B7DB2F439_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9C5056E6E0F4C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_B9C5056E6E0F4C77_OFFSET))(a1, a2);
		}
	};
}
