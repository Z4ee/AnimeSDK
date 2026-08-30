#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_91F6A5F562F9BD92_OFFSET UNITYSDK_OFFSET(0x1C308930)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_C84EA68CE9275059_OFFSET UNITYSDK_OFFSET(0x1C308B20)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_D575AE4C2E5A51E6_OFFSET UNITYSDK_OFFSET(0x1C308AF0)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_E9888521419E57C7_OFFSET UNITYSDK_OFFSET(0x1C3088F0)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C308920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAllWaveMonsterRank_TypeDefinitionIndex = 22781;

	class ByCompareAllWaveMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9888521419E57C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_E9888521419E57C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91F6A5F562F9BD92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_91F6A5F562F9BD92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D575AE4C2E5A51E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_D575AE4C2E5A51E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C84EA68CE9275059(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_C84EA68CE9275059_OFFSET))(a1, a2);
		}
	};
}
