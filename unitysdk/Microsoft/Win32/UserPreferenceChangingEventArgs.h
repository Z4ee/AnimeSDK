#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UserPreferenceCategory.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1DEAC9F0)
#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAC9B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UserPreferenceChangingEventArgs_TypeDefinitionIndex = 4311;

	class UserPreferenceChangingEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::UserPreferenceCategory category)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::UserPreferenceCategory))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTARGS__CTOR_OFFSET))(this, category);
		}

		::Microsoft::Win32::UserPreferenceCategory get_Category()
		{
			return ((::Microsoft::Win32::UserPreferenceCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTARGS_GET_CATEGORY_OFFSET))(this);
		}
	};
}
