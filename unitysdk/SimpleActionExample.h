#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace UnityEngine { class TextMesh; }

#define SIMPLEACTIONEXAMPLE_CHANGECOLOR_OFFSET UNITYSDK_OFFSET(0x146FE380)
#define SIMPLEACTIONEXAMPLE_CHANGETEXT_OFFSET UNITYSDK_OFFSET(0x146FE740)
#define SIMPLEACTIONEXAMPLE_DISPLAYSWIPEANGLE_OFFSET UNITYSDK_OFFSET(0x146FE590)
#define SIMPLEACTIONEXAMPLE_RANDOMCOLOR_OFFSET UNITYSDK_OFFSET(0x146FE390)
#define SIMPLEACTIONEXAMPLE_RESETSCALE_OFFSET UNITYSDK_OFFSET(0x146FE770)
#define SIMPLEACTIONEXAMPLE_START_OFFSET UNITYSDK_OFFSET(0x146FE2F0)
#define SIMPLEACTIONEXAMPLE_TIMEPRESSED_OFFSET UNITYSDK_OFFSET(0x146FE4F0)
#define SIMPLEACTIONEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE7B0)

inline static constexpr unsigned int SimpleActionExample_TypeDefinitionIndex = 37279;

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

	::System::Void ChangeColor(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_CHANGECOLOR_OFFSET))(this, a1);
	}

	::System::Void TimePressed(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_TIMEPRESSED_OFFSET))(this, a1);
	}

	::System::Void DisplaySwipeAngle(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_DISPLAYSWIPEANGLE_OFFSET))(this, a1);
	}

	::System::Void ChangeText(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEACTIONEXAMPLE_CHANGETEXT_OFFSET))(this, a1);
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
