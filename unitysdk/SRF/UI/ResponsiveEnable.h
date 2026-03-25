#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveBase.h"
#include "unitysdk/SRF/UI/ResponsiveEnable_Entry.h"

#define SRF_UI_RESPONSIVEENABLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x18473DC0)
#define SRF_UI_RESPONSIVEENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18474060)

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveEnable_TypeDefinitionIndex = 27671;

	class ResponsiveEnable : public ::SRF::UI::ResponsiveBase
	{
	public:
		::Il2CppArray<::SRF::UI::ResponsiveEnable_Entry>* Entries; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEENABLE__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEENABLE_REFRESH_OFFSET))(this);
		}
	};
}
