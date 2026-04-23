#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_ImageCompareResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18140A70)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18140AE0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18140720)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18140700)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_ImageCompareCallBack_TypeDefinitionIndex = 35013;

	class FramePassCapturer_ImageCompareCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::RPG::CustomRP::FramePassCapturer_ImageCompareResult& result, ::System::IAsyncResult* __result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_ImageCompareResult&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_IMAGECOMPARECALLBACK_ENDINVOKE_OFFSET))(this, result, __result);
		}
	};
}
