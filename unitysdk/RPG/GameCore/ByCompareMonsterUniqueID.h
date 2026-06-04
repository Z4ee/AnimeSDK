#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_08ED9C8A23D47D3A_OFFSET UNITYSDK_OFFSET(0x19522A40)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_31A086392D0B41C7_OFFSET UNITYSDK_OFFSET(0x19522E40)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_98091678A8916BAB_OFFSET UNITYSDK_OFFSET(0x19522BA0)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_B2BCF5BED4734090_OFFSET UNITYSDK_OFFSET(0x19522D80)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID__CTOR_OFFSET UNITYSDK_OFFSET(0x19522B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterUniqueID_TypeDefinitionIndex = 21747;

	class ByCompareMonsterUniqueID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterUniqueID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_08ED9C8A23D47D3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_08ED9C8A23D47D3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98091678A8916BAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_98091678A8916BAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2BCF5BED4734090(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_B2BCF5BED4734090_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31A086392D0B41C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_METHOD_4_31A086392D0B41C7_OFFSET))(a1, a2);
		}
	};
}
