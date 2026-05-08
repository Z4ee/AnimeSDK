#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define COMICBUBBLEIMGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13555580)

inline static constexpr unsigned int ComicBubbleImgConfig_TypeDefinitionIndex = 81968;

class ComicBubbleImgConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single r; // 0x18
	::System::Int32 precision; // 0x1C
	::System::Single bezierPrecision; // 0x20
	::System::Single bezierLenOnTriangle; // 0x24
	::System::Single bezierLenOnBubble; // 0x28
	::System::Single w; // 0x2C
	::System::Int32 ovalCirclePrecision; // 0x30
	::System::Single shortRadiusRatio; // 0x34
	::System::Single ThinkTailFirstOvalDis; // 0x38
	::System::Single ThinkTailFirstOvalLongR; // 0x3C
	::System::Single ThinkTailFirstOvalShortR; // 0x40
	::System::Single ThinkTailSecondOvalDis; // 0x44
	::System::Single ThinkTailSecondOvalRaduisRatio; // 0x48
	::System::Single ThinkTailThirdOvalDis; // 0x4C
	::System::Single ThinkTailThirdOvalRaduisRatio; // 0x50
	::System::Single show3rdBubbleInThinkTailDistance; // 0x54
	::System::Int32 CHNWordSpacing; // 0x58
	::System::Single shoutBubbleBezierLenOnTriangle; // 0x5C
	::System::Single shoutBubbleBezierLenOnBubble; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMICBUBBLEIMGCONFIG__CTOR_OFFSET))(this);
	}
};
