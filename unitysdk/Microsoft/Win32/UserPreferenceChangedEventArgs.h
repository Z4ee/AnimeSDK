#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UserPreferenceCategory.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D5C7F70)
#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7F30)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UserPreferenceChangedEventArgs_TypeDefinitionIndex = 4308;

	class UserPreferenceChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::UserPreferenceCategory category)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::UserPreferenceCategory))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTARGS__CTOR_OFFSET))(this, category);
		}

		::Microsoft::Win32::UserPreferenceCategory get_Category()
		{
			return ((::Microsoft::Win32::UserPreferenceCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTARGS_GET_CATEGORY_OFFSET))(this);
		}
	};
}
