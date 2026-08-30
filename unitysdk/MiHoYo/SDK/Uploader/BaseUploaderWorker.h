#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4E7E0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int BaseUploaderWorker_TypeDefinitionIndex = 47118;

	class BaseUploaderWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER__CTOR_OFFSET))(this);
		}
	};
}
