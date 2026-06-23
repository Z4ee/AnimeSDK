#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_COMICSCREENINFO_ANIMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB817A0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicScreenInfo_AnimInfo_TypeDefinitionIndex = 32131;

	class ComicScreenInfo_AnimInfo : public ::System::Object
	{
	public:
		::System::Single animationTime; // 0x10
		::System::String* animCurveKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSCREENINFO_ANIMINFO__CTOR_OFFSET))(this);
		}
	};
}
