#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEMOVESTATECONFIG_METHOD_2_E87AF73473763774_OFFSET UNITYSDK_OFFSET(0x1704D400)
#define RPG_GAMECORE_CAKERACEMOVESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1704D6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMoveStateConfig_TypeDefinitionIndex = 16913;

	class CakeRaceMoveStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChargeDurationMs; // 0x10
		::System::UInt32 DurationMs; // 0x14
		::System::UInt32 AmplitudeMm; // 0x18
		::System::String* AnimTrigger; // 0x20
		::RPG::GameCore::CakeRaceCurveType CurveType; // 0x28
		::RPG::GameCore::FloatCurve* Curve; // 0x30
		::System::Boolean NeedApplyTrapSpeedFactor; // 0x38
		::System::Boolean NeedApplyGravity; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E87AF73473763774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceMoveStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceMoveStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVESTATECONFIG_METHOD_2_E87AF73473763774_OFFSET))(a1, a2);
		}
	};
}
