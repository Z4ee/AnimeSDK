#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int DesktopUploaderWorker___O_TypeDefinitionIndex = 47120;

	class DesktopUploaderWorker___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Uploader::UploadCallbackAction** StaticGet__0___MiHoYoUploaderIntrnalCallback()
		{
			return (::MiHoYo::SDK::Uploader::UploadCallbackAction**)Il2CppClass::FromTypeDefinitionIndex(DesktopUploaderWorker___O_TypeDefinitionIndex)->GetStaticField(0x5EBE0);
		}
	};
}
