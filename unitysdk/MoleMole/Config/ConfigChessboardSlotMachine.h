#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11CA64E0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA65A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardSlotMachine_TypeDefinitionIndex = 43566;

	class ConfigChessboardSlotMachine : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EndPieceEffectPath; // 0x18
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
		::System::String* PieceEffectPath; // 0x28
		::System::Single PieceDurationMax; // 0x30
		::System::Single RandomRange; // 0x34
		::System::Int32 EndPieceAudioID; // 0x38
		::System::Int32 PieceAudioID; // 0x3C
		::System::Single Range; // 0x40
		::System::Single PieceDurationMin; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
