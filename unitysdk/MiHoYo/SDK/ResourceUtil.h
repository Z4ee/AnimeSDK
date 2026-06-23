#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_RESOURCEUTIL_GETCONSOLESDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x1BE619C0)
#define MIHOYO_SDK_RESOURCEUTIL_GETPSSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x1BE618C0)
#define MIHOYO_SDK_RESOURCEUTIL_GETSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x1BE61770)
#define MIHOYO_SDK_RESOURCEUTIL_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1BE61730)
#define MIHOYO_SDK_RESOURCEUTIL_LOADJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1BE61750)
#define MIHOYO_SDK_RESOURCEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE61AC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ResourceUtil_TypeDefinitionIndex = 19841;

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
