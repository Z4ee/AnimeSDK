#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_63C942FC0A67226C_OFFSET UNITYSDK_OFFSET(0x18C5B820)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_E9E6315FF8E6FE74_OFFSET UNITYSDK_OFFSET(0x18C71B30)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPredicateWithEntity_TypeDefinitionIndex = 20876;

	class PropPredicateWithEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntityType>* LayerMask; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9E6315FF8E6FE74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_E9E6315FF8E6FE74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63C942FC0A67226C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_METHOD_4_63C942FC0A67226C_OFFSET))(a1, a2);
		}
	};
}
