#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1270F730)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1270F810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardUiPostProcess_TypeDefinitionIndex = 42082;

	class ConfigChessboardUiPostProcess : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::String* EffectKey; // 0x20
		::System::String* uiAnimName; // 0x28
		::System::Single BlackMaskDuration; // 0x30
		::System::Single Duration; // 0x34
		::System::Boolean BlackMaskEnable; // 0x38
		::System::Boolean uiAnimImmediate; // 0x39
		::MoleMole::Config::ScreenEffectType EffectType; // 0x3C
		::System::Single uiAnimDelay; // 0x40

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
