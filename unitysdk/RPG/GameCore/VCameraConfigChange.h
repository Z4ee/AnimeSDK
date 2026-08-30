#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERACONFIGCHANGE_METHOD_3_267D18E754F53CCE_OFFSET UNITYSDK_OFFSET(0x1D2B8B70)
#define RPG_GAMECORE_VCAMERACONFIGCHANGE_METHOD_3_F65C54B5219F931E_OFFSET UNITYSDK_OFFSET(0x1D2B8CD0)
#define RPG_GAMECORE_VCAMERACONFIGCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraConfigChange_TypeDefinitionIndex = 23453;

	class VCameraConfigChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitCloseupShotFinish; // 0x18
		::System::String* CharacterCameraConfigName; // 0x20
		::RPG::GameCore::TargetEvaluator* CharacterCameraTargetType; // 0x28
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x30
		::System::String* CameraConfigReferenceKey; // 0x38
		::RPG::GameCore::JsonEnum* Tag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_267D18E754F53CCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraConfigChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraConfigChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE_METHOD_3_267D18E754F53CCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F65C54B5219F931E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE_METHOD_3_F65C54B5219F931E_OFFSET))(a1, a2);
		}
	};
}
