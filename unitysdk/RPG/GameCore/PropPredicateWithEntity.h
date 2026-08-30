#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_78485CCAF1EAF3D5_OFFSET UNITYSDK_OFFSET(0x1D36BA50)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_92D6D92CC964DC46_OFFSET UNITYSDK_OFFSET(0x1D36B7A0)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_9EB70A99D22E1F86_OFFSET UNITYSDK_OFFSET(0x1D36B820)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_DB3F78FC90994EE6_OFFSET UNITYSDK_OFFSET(0x1D36BA00)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36B7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPredicateWithEntity_TypeDefinitionIndex = 21770;

	class PropPredicateWithEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntityType>* LayerMask; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_92D6D92CC964DC46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_92D6D92CC964DC46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EB70A99D22E1F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_9EB70A99D22E1F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB3F78FC90994EE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_DB3F78FC90994EE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_78485CCAF1EAF3D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_78485CCAF1EAF3D5_OFFSET))(a1, a2);
		}
	};
}
