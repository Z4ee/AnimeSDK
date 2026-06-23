#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192986A0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19298760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardSlotMachine_TypeDefinitionIndex = 60730;

	class ConfigChessboardSlotMachine : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EndPieceEffectPath; // 0x18
		::System::String* PieceEffectPath; // 0x20
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x28
		::System::Single Range; // 0x30
		::System::Int32 PieceAudioID; // 0x34
		::System::Single PieceDurationMin; // 0x38
		::System::Single PieceDurationMax; // 0x3C
		::System::Single RandomRange; // 0x40
		::System::Int32 EndPieceAudioID; // 0x44

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
