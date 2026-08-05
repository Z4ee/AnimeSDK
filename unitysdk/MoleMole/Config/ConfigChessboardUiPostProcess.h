#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x134F70C0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x134F71A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardUiPostProcess_TypeDefinitionIndex = 61016;

	class ConfigChessboardUiPostProcess : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EffectKey; // 0x18
		::System::String* uiAnimName; // 0x20
		::UnityEngine::AnimationCurve* Curve; // 0x28
		::MoleMole::Config::ScreenEffectType EffectType; // 0x30
		::System::Single Duration; // 0x34
		::System::Single uiAnimDelay; // 0x38
		::System::Single BlackMaskDuration; // 0x3C
		::System::Boolean uiAnimImmediate; // 0x40
		::System::Boolean BlackMaskEnable; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
