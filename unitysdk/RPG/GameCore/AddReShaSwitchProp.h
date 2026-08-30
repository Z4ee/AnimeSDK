#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHASWITCHPROP_METHOD_3_2674FC9CB00E6BD7_OFFSET UNITYSDK_OFFSET(0x1D6A45B0)
#define RPG_GAMECORE_ADDRESHASWITCHPROP_METHOD_3_85FE414D15A4BE2D_OFFSET UNITYSDK_OFFSET(0x1D6A4530)
#define RPG_GAMECORE_ADDRESHASWITCHPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaSwitchProp_TypeDefinitionIndex = 21782;

	class AddReShaSwitchProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* RouteDisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85FE414D15A4BE2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaSwitchProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaSwitchProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP_METHOD_3_85FE414D15A4BE2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2674FC9CB00E6BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaSwitchProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaSwitchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP_METHOD_3_2674FC9CB00E6BD7_OFFSET))(a1, a2);
		}
	};
}
