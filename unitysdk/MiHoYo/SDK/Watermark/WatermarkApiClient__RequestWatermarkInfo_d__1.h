#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B345120)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B345270)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B3452D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B345280)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B345110)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__REQUESTWATERMARKINFO_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B345100)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkApiClient__RequestWatermarkInfo_d__1_TypeDefinitionIndex = 20607;

	class WatermarkApiClient__RequestWatermarkInfo_d__1 : public ::System::Object
	{
	public:
		::System::String* _url_5__1; // 0x10
		::MiHoYo::SDK::Watermark::WatermarkRequest* body; // 0x18
		::System::Action* timeoutCallback; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Action_1<::System::String*>* responseCallback; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Single timeoutSecond; // 0x44

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
