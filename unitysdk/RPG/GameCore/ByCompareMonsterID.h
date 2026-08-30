#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_403A3AC3DC22CBA4_OFFSET UNITYSDK_OFFSET(0x1BBA6D00)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_6C683C63AB48E4CA_OFFSET UNITYSDK_OFFSET(0x1BBA6B20)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_7512E0A2467384AD_OFFSET UNITYSDK_OFFSET(0x1BBA6A40)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_B92929C4F874AC35_OFFSET UNITYSDK_OFFSET(0x1BBA6D80)
#define RPG_GAMECORE_BYCOMPAREMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA6AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterID_TypeDefinitionIndex = 22740;

	class ByCompareMonsterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7512E0A2467384AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_7512E0A2467384AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C683C63AB48E4CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_6C683C63AB48E4CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_403A3AC3DC22CBA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_403A3AC3DC22CBA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B92929C4F874AC35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_B92929C4F874AC35_OFFSET))(a1, a2);
		}
	};
}
