#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WATERMARKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0EA810)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WatermarkInfo_TypeDefinitionIndex = 19657;

	class WatermarkInfo : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x18
		::System::String* cloud_app_id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARKINFO__CTOR_OFFSET))(this);
		}
	};
}
