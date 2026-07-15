#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_DOWNLOADWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B6C72C0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_REQUESTWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x1B6C7230)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C7340)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkApiClient_TypeDefinitionIndex = 8533;

	class WatermarkApiClient : public ::System::Object
	{
	public:
		// static const ::System::Single REQUEST_TIMEOUT_SECONDS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* RequestWatermarkInfo(::MiHoYo::SDK::Watermark::WatermarkRequest* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MiHoYo::SDK::Watermark::WatermarkRequest*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_REQUESTWATERMARKINFO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::IEnumerator* DownloadWatermarkImage(::System::String* a1, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* a2, ::System::Action* a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_DOWNLOADWATERMARKIMAGE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
