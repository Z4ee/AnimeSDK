#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class OSSUploader; }
namespace MiHoYo::SDK::Uploader { class Task; }

#define MIHOYO_SDK_UPLOADER_OSSUPLOADER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFEA90)
#define MIHOYO_SDK_UPLOADER_OSSUPLOADER___C__DISPLAYCLASS1_0__INTERNALUPLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1ADFEAA0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int OSSUploader___c__DisplayClass1_0_TypeDefinitionIndex = 35438;

	class OSSUploader___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Uploader::OSSUploader* __4__this; // 0x10
		::MiHoYo::SDK::Uploader::Task* task; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_OSSUPLOADER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _InternalUpload_b__0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_OSSUPLOADER___C__DISPLAYCLASS1_0__INTERNALUPLOAD_B__0_OFFSET))(this, _);
		}
	};
}
