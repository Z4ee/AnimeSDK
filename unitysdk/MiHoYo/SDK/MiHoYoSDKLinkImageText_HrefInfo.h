#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_HREFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18508B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_HrefInfo_TypeDefinitionIndex = 44731;

	class MiHoYoSDKLinkImageText_HrefInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* boxes; // 0x10
		::System::String* name; // 0x18
		::System::Int32 newStartIndex; // 0x20
		::System::Int32 newEndIndex; // 0x24
		::System::Int32 endIndex; // 0x28
		::System::Int32 startIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_HREFINFO__CTOR_OFFSET))(this);
		}
	};
}
