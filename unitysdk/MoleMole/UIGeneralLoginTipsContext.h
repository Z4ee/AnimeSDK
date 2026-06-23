#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_UIGENERALLOGINTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A740D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsContext_TypeDefinitionIndex = 41237;

	class UIGeneralLoginTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::UnityEngine::Vector2> anchoredPosition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
