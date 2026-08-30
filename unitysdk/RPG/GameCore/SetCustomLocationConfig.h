#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_METHOD_3_A0DA3E521BE6366D_OFFSET UNITYSDK_OFFSET(0x1E816030)
#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_METHOD_3_FF10492A58C24AA4_OFFSET UNITYSDK_OFFSET(0x1E815FE0)
#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E816020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCustomLocationConfig_TypeDefinitionIndex = 22242;

	class SetCustomLocationConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x20
		::System::Boolean RefreshImmediately; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF10492A58C24AA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCustomLocationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCustomLocationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_METHOD_3_FF10492A58C24AA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0DA3E521BE6366D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCustomLocationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCustomLocationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_METHOD_3_A0DA3E521BE6366D_OFFSET))(a1, a2);
		}
	};
}
