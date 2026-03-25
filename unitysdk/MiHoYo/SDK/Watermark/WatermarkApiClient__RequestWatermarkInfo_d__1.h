#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16025290)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x160253C0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16025420)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x160253D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16025280)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x160250C0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkApiClient__RequestWatermarkInfo_d__1_TypeDefinitionIndex = 7478;

	class WatermarkApiClient__RequestWatermarkInfo_d__1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Watermark::WatermarkRequest* body; // 0x10
		::System::Action_1<::System::String*>* responseCallback; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Object* __2__current; // 0x30
		::System::String* _url_5__1; // 0x38
		::System::Single timeoutSecond; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
