#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/IComicAnim.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_COMIC_TWOPOINTANIM_ONSTARTPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1FB31E30)
#define MOLEMOLE_COMIC_TWOPOINTANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB31E40)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int TwoPointAnim_TypeDefinitionIndex = 32770;

	class TwoPointAnim : public ::MoleMole::Comic::IComicAnim
	{
	public:
		::UnityEngine::Vector2 startPosition; // 0x18
		::UnityEngine::Vector2 endPosition; // 0x20
		::System::Single animDuration; // 0x28
		::System::String* animCurveKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_TWOPOINTANIM__CTOR_OFFSET))(this);
		}

		::System::Void OnStartPositionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_TWOPOINTANIM_ONSTARTPOSITIONCHANGE_OFFSET))(this);
		}
	};
}
