#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_COMICSHAKEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BD730)

namespace MoleMole
{
	inline static constexpr unsigned int ComicShakeInfo_TypeDefinitionIndex = 30590;

	class ComicShakeInfo : public ::System::Object
	{
	public:
		::MoleMole::ComicImgPart imgTarget; // 0x10
		::UnityEngine::Vector2 shakePivot; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSHAKEINFO__CTOR_OFFSET))(this);
		}
	};
}
