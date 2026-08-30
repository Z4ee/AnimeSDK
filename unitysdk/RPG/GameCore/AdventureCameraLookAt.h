#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseAdventureCameraLookAt.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_07A653F13457A58E_OFFSET UNITYSDK_OFFSET(0x1CBB46F0)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_1EE311594141AD5E_OFFSET UNITYSDK_OFFSET(0x1CBB46A0)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB46E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAt_TypeDefinitionIndex = 20271;

	class AdventureCameraLookAt : public ::RPG::GameCore::BaseAdventureCameraLookAt
	{
	public:
		::System::Boolean Reset; // 0x60
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x68
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x70
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x78
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x80
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1EE311594141AD5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_1EE311594141AD5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07A653F13457A58E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_07A653F13457A58E_OFFSET))(a1, a2);
		}
	};
}
