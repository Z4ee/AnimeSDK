#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerParameter_AisacControl.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerParameter_Volume.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactDuckerParameter_Target_TypeDefinitionIndex = 37835;

	struct alignas(4) CriAtomExCategory_ReactDuckerParameter_Target
	{
		::CriWare::CriAtomExCategory_ReactDuckerParameter_Volume volume; // 0x10
		::CriWare::CriAtomExCategory_ReactDuckerParameter_AisacControl aisacControl; // 0x10
	};
}
