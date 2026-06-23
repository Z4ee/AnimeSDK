#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGRABGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x170B4940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRabGame_TypeDefinitionIndex = 50676;

	class ConfigRabGame : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* glitchEffectPath; // 0x58
		::System::String* ultiEffectPath; // 0x60
		::System::String* ultiEffectAttachPoint; // 0x68
		::System::String* glitchMaskAttachPoint; // 0x70
		::System::String* timeSlowKey; // 0x78
		::System::Single screenSpaceMaskRadius; // 0x80
		::System::Single screenSpaceMaskFeather; // 0x84
		::System::Boolean invertMask; // 0x88
		::UnityEngine::AnimationCurve* scaleUpCurve; // 0x90
		::System::Single scaleMultiplier; // 0x98
		::UnityEngine::AnimationCurve* scaleRecoverCurve; // 0xA0
		::System::Single scaleRecoverTime; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRABGAME__CTOR_OFFSET))(this);
		}
	};
}
