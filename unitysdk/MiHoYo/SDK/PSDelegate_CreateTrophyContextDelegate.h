#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA74A50)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA74AA0)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA74A40)
#define MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA749D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_CreateTrophyContextDelegate_TypeDefinitionIndex = 7698;

	class PSDelegate_CreateTrophyContextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CREATETROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
