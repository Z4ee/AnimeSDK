#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_185CF183A4DBE553.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALLOGINTIPSCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x15248380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsContextV2_TypeDefinitionIndex = 76715;

	class UIGeneralLoginTipsContextV2 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* tipDesc; // 0x28
		::Enum_3_185CF183A4DBE553 tipsType; // 0x30
		::System::Nullable_1<::UnityEngine::Vector2> anchoredPosition; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSCONTEXTV2__CTOR_OFFSET))(this);
		}
	};
}
