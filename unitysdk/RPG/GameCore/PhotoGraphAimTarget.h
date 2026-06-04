#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET_METHOD_3_D0C823BCD30492E4_OFFSET UNITYSDK_OFFSET(0x19A057B0)
#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET_METHOD_3_FEA216629C9533AA_OFFSET UNITYSDK_OFFSET(0x19A05830)
#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19A05800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimTarget_TypeDefinitionIndex = 20443;

	class PhotoGraphAimTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x20
		::System::Boolean IsAim; // 0x28
		::RPG::GameCore::PhotoGraphAimIdentifyType AimIdentifyType; // 0x2C
		::System::Single AimTagExtraOffset; // 0x30
		::System::Single AimTagExtraOffsetX; // 0x34
		::System::Single AimTagExtraOffsetZ; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0C823BCD30492E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET_METHOD_3_D0C823BCD30492E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEA216629C9533AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET_METHOD_3_FEA216629C9533AA_OFFSET))(a1, a2);
		}
	};
}
