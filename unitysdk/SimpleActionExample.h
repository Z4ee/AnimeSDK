#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace UnityEngine { class TextMesh; }

#define SIMPLEACTIONEXAMPLE_CHANGECOLOR_OFFSET UNITYSDK_OFFSET(0x12C4FCB0)
#define SIMPLEACTIONEXAMPLE_CHANGETEXT_OFFSET UNITYSDK_OFFSET(0x12C50070)
#define SIMPLEACTIONEXAMPLE_DISPLAYSWIPEANGLE_OFFSET UNITYSDK_OFFSET(0x12C4FEC0)
#define SIMPLEACTIONEXAMPLE_RANDOMCOLOR_OFFSET UNITYSDK_OFFSET(0x12C4FCC0)
#define SIMPLEACTIONEXAMPLE_RESETSCALE_OFFSET UNITYSDK_OFFSET(0x12C500A0)
#define SIMPLEACTIONEXAMPLE_START_OFFSET UNITYSDK_OFFSET(0x12C4FC20)
#define SIMPLEACTIONEXAMPLE_TIMEPRESSED_OFFSET UNITYSDK_OFFSET(0x12C4FE20)
#define SIMPLEACTIONEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C500E0)

inline static constexpr unsigned int SimpleActionExample_TypeDefinitionIndex = 36979;

class SimpleActionExample : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::TextMesh* textMesh; // 0x18
	::UnityEngine::Vector3 startScale; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_START_OFFSET))(this);
	}

	::System::Void ChangeColor(::HedgehogTeam::EasyTouch::Gesture* gesture)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_CHANGECOLOR_OFFSET))(this, gesture);
	}

	::System::Void TimePressed(::HedgehogTeam::EasyTouch::Gesture* gesture)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_TIMEPRESSED_OFFSET))(this, gesture);
	}

	::System::Void DisplaySwipeAngle(::HedgehogTeam::EasyTouch::Gesture* gesture)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_DISPLAYSWIPEANGLE_OFFSET))(this, gesture);
	}

	::System::Void ChangeText(::System::String* text)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_CHANGETEXT_OFFSET))(this, text);
	}

	::System::Void ResetScale()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_RESETSCALE_OFFSET))(this);
	}

	::System::Void RandomColor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_RANDOMCOLOR_OFFSET))(this);
	}
};
