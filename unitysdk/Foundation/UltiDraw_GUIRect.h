#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_ULTIDRAW_GUIRECT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A026510)
#define FOUNDATION_ULTIDRAW_GUIRECT_GETSIZE_OFFSET UNITYSDK_OFFSET(0x1A026550)
#define FOUNDATION_ULTIDRAW_GUIRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A026590)

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_GUIRect_TypeDefinitionIndex = 7697;

	class UltiDraw_GUIRect : public ::System::Object
	{
	public:
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single W; // 0x18
		::System::Single H; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GUIRECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GUIRECT_GETPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GUIRECT_GETSIZE_OFFSET))(this);
		}
	};
}
