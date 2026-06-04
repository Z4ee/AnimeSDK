#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_2A6A1E8CF9DAAD82_OFFSET UNITYSDK_OFFSET(0x19DEC220)
#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_6A1F709BBE7A8581_OFFSET UNITYSDK_OFFSET(0x19DEC340)
#define RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEC2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceWithDetectProjectileData_TypeDefinitionIndex = 14897;

	class TraceWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB8
		::System::Single CollisionEnableDelay; // 0xC0
		::System::Single MaxLifeTime; // 0xC4
		::System::Single TraceDelay; // 0xC8
		::System::Single TurnSpeed; // 0xCC
		::System::Boolean TraceAttachPoint; // 0xD0
		::System::Boolean MuteTraceIfTargetNotAlive; // 0xD1
		::System::Boolean DelayMoveOneFrame; // 0xD2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A6A1E8CF9DAAD82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_2A6A1E8CF9DAAD82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A1F709BBE7A8581(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEWITHDETECTPROJECTILEDATA_METHOD_3_6A1F709BBE7A8581_OFFSET))(a1, a2);
		}
	};
}
