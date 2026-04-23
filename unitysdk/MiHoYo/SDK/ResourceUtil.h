#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_RESOURCEUTIL_GETCONSOLESDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x17640170)
#define MIHOYO_SDK_RESOURCEUTIL_GETPSSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x17640070)
#define MIHOYO_SDK_RESOURCEUTIL_GETSDKCACHEDIR_OFFSET UNITYSDK_OFFSET(0x1763FF40)
#define MIHOYO_SDK_RESOURCEUTIL_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1763F710)
#define MIHOYO_SDK_RESOURCEUTIL_LOADJSONSTRING_OFFSET UNITYSDK_OFFSET(0x17631BA0)
#define MIHOYO_SDK_RESOURCEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17640270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ResourceUtil_TypeDefinitionIndex = 7119;

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
