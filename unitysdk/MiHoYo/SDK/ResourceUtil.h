#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_RESOURCEUTIL_GETCONSOLESDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x15FE2480)
#define MIHOYO_SDK_RESOURCEUTIL_GETPSSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x15FE2380)
#define MIHOYO_SDK_RESOURCEUTIL_GETSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x15FE2250)
#define MIHOYO_SDK_RESOURCEUTIL_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x15FE1A00)
#define MIHOYO_SDK_RESOURCEUTIL_LOADJSONSTRING_OFFSET UNITYSDK_OFFSET(0x15FE1CD0)
#define MIHOYO_SDK_RESOURCEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2580)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ResourceUtil_TypeDefinitionIndex = 7076;

	class ResourceUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL_ISEDITOR_OFFSET))();
		}

		static ::System::String* LoadJsonString(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL_LOADJSONSTRING_OFFSET))(path);
		}

		static ::System::String* GetSDKCacheDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL_GETSDKCACHEDIR_OFFSET))();
		}

		static ::System::String* GetPSSDKCacheDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL_GETPSSDKCACHEDIR_OFFSET))();
		}

		static ::System::String* GetConsoleSDKCacheDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RESOURCEUTIL_GETCONSOLESDKCACHEDIR_OFFSET))();
		}
	};
}
