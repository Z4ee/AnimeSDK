#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class AWSUploader; }
namespace MiHoYo::SDK::Uploader { class Task; }

#define MIHOYO_SDK_UPLOADER_AWSUPLOADER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBBD20)
#define MIHOYO_SDK_UPLOADER_AWSUPLOADER___C__DISPLAYCLASS2_0__INTERNALUPLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x19FBBD30)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int AWSUploader___c__DisplayClass2_0_TypeDefinitionIndex = 35441;

	class AWSUploader___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Uploader::AWSUploader* __4__this; // 0x10
		::MiHoYo::SDK::Uploader::Task* task; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_AWSUPLOADER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _InternalUpload_b__0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_AWSUPLOADER___C__DISPLAYCLASS2_0__INTERNALUPLOAD_B__0_OFFSET))(this, _);
		}
	};
}
