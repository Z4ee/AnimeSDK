#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VCAMERASHOWTARGETENTITY_METHOD_2_BFA33D6F15CEB745_OFFSET UNITYSDK_OFFSET(0x1D2B8310)
#define RPG_GAMECORE_VCAMERASHOWTARGETENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BA660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraShowTargetEntity_TypeDefinitionIndex = 16249;

	class VCameraShowTargetEntity : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::TargetEvaluator* ShowTargetType; // 0x18
		::System::Boolean IsTargetIgnoreCameraDither; // 0x20
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x21
		::System::Boolean IsAliveOnly; // 0x22
		::System::Boolean HideFieldEffect; // 0x23
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x24
		::System::Single RayHitDitherCheckInterval; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOWTARGETENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFA33D6F15CEB745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraShowTargetEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraShowTargetEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOWTARGETENTITY_METHOD_2_BFA33D6F15CEB745_OFFSET))(a1, a2);
		}
	};
}
