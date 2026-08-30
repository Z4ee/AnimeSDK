#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_9F6C1BADFE0AC38E_OFFSET UNITYSDK_OFFSET(0x1C324270)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_A44EFC30B30929DB_OFFSET UNITYSDK_OFFSET(0x1C3242B0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_E01179FBE1B89DD9_OFFSET UNITYSDK_OFFSET(0x1C324500)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_E8C5364561EAE6F6_OFFSET UNITYSDK_OFFSET(0x1C324530)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3242A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareInfiniteWaveSummonProgress_TypeDefinitionIndex = 22993;

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

		static ::System::Void Method_4_9F6C1BADFE0AC38E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_9F6C1BADFE0AC38E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A44EFC30B30929DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_A44EFC30B30929DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E01179FBE1B89DD9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_E01179FBE1B89DD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8C5364561EAE6F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_METHOD_4_E8C5364561EAE6F6_OFFSET))(a1, a2);
		}
	};
}
