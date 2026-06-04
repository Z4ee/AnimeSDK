#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_3DF14618825A01B0_OFFSET UNITYSDK_OFFSET(0x195198F0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_979F1860C14D4D49_OFFSET UNITYSDK_OFFSET(0x195195D0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_A44EFC30B30929DB_OFFSET UNITYSDK_OFFSET(0x195196A0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_EA69D2C142970EE1_OFFSET UNITYSDK_OFFSET(0x19519970)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19519650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareInfiniteWaveSummonProgress_TypeDefinitionIndex = 21989;

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

		static ::System::Void Method_4_3DF14618825A01B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_3DF14618825A01B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA69D2C142970EE1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_EA69D2C142970EE1_OFFSET))(a1, a2);
		}
	};
}
