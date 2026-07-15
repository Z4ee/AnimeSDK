#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerParameter_Target.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerTargetType.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactFadeParameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactHoldType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactDuckerParameter_TypeDefinitionIndex = 37832;

	struct alignas(4) CriAtomExCategory_ReactDuckerParameter
	{
		::CriWare::CriAtomExCategory_ReactDuckerParameter_Target target; // 0x10
		::CriWare::CriAtomExCategory_ReactDuckerTargetType targetType; // 0x18
		::CriWare::CriAtomExCategory_ReactFadeParameter entry; // 0x1C
		::CriWare::CriAtomExCategory_ReactFadeParameter exit; // 0x28
		::CriWare::CriAtomExCategory_ReactHoldType holdType; // 0x34
		::System::UInt16 holdTimeMs; // 0x38
	};
}
