#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIMAINPAGEBGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147BCBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPageBGContext_TypeDefinitionIndex = 60592;

	class UIMainPageBGContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::UI::RawImage* img; // 0x28
		::System::Int32 height; // 0x30
		::System::Int32 width; // 0x34
		::System::Int32 postGirlID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
