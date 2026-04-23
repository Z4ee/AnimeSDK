#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175F9F40)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175F9F90)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175D3700)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175F9F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_CreateTrophyContextDelegate_TypeDefinitionIndex = 6789;

	class PSDelegate_CreateTrophyContextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32& trophyContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_INVOKE_OFFSET))(this, trophyContext);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& trophyContext, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET))(this, trophyContext, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& trophyContext, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET))(this, trophyContext, result);
		}
	};
}
