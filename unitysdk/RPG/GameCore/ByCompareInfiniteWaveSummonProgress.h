#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_979F1860C14D4D49_OFFSET UNITYSDK_OFFSET(0x18730400)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_A44EFC30B30929DB_OFFSET UNITYSDK_OFFSET(0x187304D0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18730480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareInfiniteWaveSummonProgress_TypeDefinitionIndex = 22223;

	class ByCompareInfiniteWaveSummonProgress : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CompareToUnsummoned; // 0x20
		::RPG::GameCore::CompareType CompareOperator; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_979F1860C14D4D49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_979F1860C14D4D49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A44EFC30B30929DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_A44EFC30B30929DB_OFFSET))(a1, a2);
		}
	};
}
