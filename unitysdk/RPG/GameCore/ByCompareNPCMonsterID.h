#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_55D74B7E417D967C_OFFSET UNITYSDK_OFFSET(0x1CEEB950)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_5CC645515A6CB012_OFFSET UNITYSDK_OFFSET(0x1CEEBBB0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_9FD5B054BC260969_OFFSET UNITYSDK_OFFSET(0x1CEEB990)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_E2ABB9EF85D3969C_OFFSET UNITYSDK_OFFSET(0x1CEEBBE0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEB980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNPCMonsterID_TypeDefinitionIndex = 20797;

	class ByCompareNPCMonsterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 NPCMonsterID; // 0x28
		::System::Boolean CompareProtoTypeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55D74B7E417D967C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_55D74B7E417D967C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FD5B054BC260969(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_9FD5B054BC260969_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5CC645515A6CB012(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_5CC645515A6CB012_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2ABB9EF85D3969C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_E2ABB9EF85D3969C_OFFSET))(a1, a2);
		}
	};
}
