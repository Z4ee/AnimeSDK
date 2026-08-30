#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_ImageCompareResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1857C4C0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1857C530)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1857C4B0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C440)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_ImageCompareCallBack_TypeDefinitionIndex = 36939;

	class FramePassCapturer_ImageCompareCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
