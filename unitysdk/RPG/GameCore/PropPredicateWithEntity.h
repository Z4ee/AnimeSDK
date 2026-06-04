#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_0BB8E6E35BEE5979_OFFSET UNITYSDK_OFFSET(0x19A93B40)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_1A122A9D3F792847_OFFSET UNITYSDK_OFFSET(0x19A93C20)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_9EB70A99D22E1F86_OFFSET UNITYSDK_OFFSET(0x19A93960)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_BC96DA3BC2851A7D_OFFSET UNITYSDK_OFFSET(0x19A937C0)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19A938A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPredicateWithEntity_TypeDefinitionIndex = 20795;

	class PropPredicateWithEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntityType>* LayerMask; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC96DA3BC2851A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_BC96DA3BC2851A7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EB70A99D22E1F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_9EB70A99D22E1F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BB8E6E35BEE5979(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_0BB8E6E35BEE5979_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A122A9D3F792847(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_1A122A9D3F792847_OFFSET))(a1, a2);
		}
	};
}
