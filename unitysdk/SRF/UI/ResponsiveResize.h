#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveBase.h"
#include "unitysdk/SRF/UI/ResponsiveResize_Element.h"

#define SRF_UI_RESPONSIVERESIZE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E6B8B80)
#define SRF_UI_RESPONSIVERESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B8F00)

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveResize_TypeDefinitionIndex = 34718;

	class ResponsiveResize : public ::SRF::UI::ResponsiveBase
	{
	public:
		::Il2CppArray<::SRF::UI::ResponsiveResize_Element>* Elements; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVERESIZE__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVERESIZE_REFRESH_OFFSET))(this);
		}
	};
}
