#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_0DC791D31E0AD3D6_OFFSET UNITYSDK_OFFSET(0x1BBA9120)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_5E6B8C74B5521BF7_OFFSET UNITYSDK_OFFSET(0x1BBA90A0)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_98091678A8916BAB_OFFSET UNITYSDK_OFFSET(0x1BBA8EC0)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_DA0D93B6C898E4D0_OFFSET UNITYSDK_OFFSET(0x1BBA8DE0)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA8E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterUniqueID_TypeDefinitionIndex = 22742;

	class ByCompareMonsterUniqueID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterUniqueID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DA0D93B6C898E4D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_DA0D93B6C898E4D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98091678A8916BAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_98091678A8916BAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E6B8C74B5521BF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_5E6B8C74B5521BF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DC791D31E0AD3D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_0DC791D31E0AD3D6_OFFSET))(a1, a2);
		}
	};
}
