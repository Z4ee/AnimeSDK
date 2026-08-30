#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEWAYPOINTBYPROP_METHOD_3_7E0AE979613413F1_OFFSET UNITYSDK_OFFSET(0x1D18EAF0)
#define RPG_GAMECORE_HIDEWAYPOINTBYPROP_METHOD_3_A175524D6535CFB2_OFFSET UNITYSDK_OFFSET(0x1D18EAB0)
#define RPG_GAMECORE_HIDEWAYPOINTBYPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18EAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideWaypointByProp_TypeDefinitionIndex = 20636;

	class HideWaypointByProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseOwnerEntity; // 0x20
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30
		::RPG::GameCore::DynamicString* PropKey; // 0x38
		::System::Boolean OnNameBoard; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A175524D6535CFB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypointByProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypointByProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP_METHOD_3_A175524D6535CFB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E0AE979613413F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypointByProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP_METHOD_3_7E0AE979613413F1_OFFSET))(a1, a2);
		}
	};
}
