#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17689730)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x176897D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17689830)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x176897E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17689720)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x17689700)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkApiClient__DownloadWatermarkImage_d__2_TypeDefinitionIndex = 7620;

	class WatermarkApiClient__DownloadWatermarkImage_d__2 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completeCallback; // 0x18
		::System::Action* timeoutCallback; // 0x20
		::System::String* url; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single timeoutSecond; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__DOWNLOADWATERMARKIMAGE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
