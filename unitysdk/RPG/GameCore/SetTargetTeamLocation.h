#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETTEAMLOCATION_METHOD_3_6EE614B4E40DB3FE_OFFSET UNITYSDK_OFFSET(0x19C62D70)
#define RPG_GAMECORE_SETTARGETTEAMLOCATION_METHOD_3_7C273689D536121C_OFFSET UNITYSDK_OFFSET(0x19C62CF0)
#define RPG_GAMECORE_SETTARGETTEAMLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C62D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetTeamLocation_TypeDefinitionIndex = 21665;

	class SetTargetTeamLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Row; // 0x20
		::RPG::GameCore::DynamicFloat* Col; // 0x28
		::RPG::GameCore::TeamLocationType Location; // 0x30
		::System::Boolean RefreshImmediately; // 0x34
		::RPG::GameCore::TargetEvaluator* CustomCaster; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C273689D536121C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetTeamLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetTeamLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION_METHOD_3_7C273689D536121C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6EE614B4E40DB3FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetTeamLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetTeamLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION_METHOD_3_6EE614B4E40DB3FE_OFFSET))(a1, a2);
		}
	};
}
