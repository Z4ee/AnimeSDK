#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_3D8A77030D68BEBE_OFFSET UNITYSDK_OFFSET(0x190A14C0)
#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_6A1F709BBE7A8581_OFFSET UNITYSDK_OFFSET(0x190A15E0)
#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190A1560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceWithDetectProjectileData_TypeDefinitionIndex = 14833;

	class TraceWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB0
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::System::Single TraceDelay; // 0xC0
		::System::Single TurnSpeed; // 0xC4
		::System::Boolean TraceAttachPoint; // 0xC8
		::System::Boolean MuteTraceIfTargetNotAlive; // 0xC9
		::System::Boolean DelayMoveOneFrame; // 0xCA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D8A77030D68BEBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_3D8A77030D68BEBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A1F709BBE7A8581(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_6A1F709BBE7A8581_OFFSET))(a1, a2);
		}
	};
}
