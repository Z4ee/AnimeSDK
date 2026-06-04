#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D3CC0)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D3D00)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183AB4F0)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3C40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenURLDelegate_TypeDefinitionIndex = 7674;

	class PSDelegate_OpenURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
