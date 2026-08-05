#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B5450)
#define MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B54E0)
#define MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B5140)
#define MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B5120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_UnlockTrophyDelegate_TypeDefinitionIndex = 19852;

	class PSDelegate_UnlockTrophyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 trophyContext, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_INVOKE_OFFSET))(this, trophyContext, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 trophyContext, ::System::Int32 value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_BEGININVOKE_OFFSET))(this, trophyContext, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNLOCKTROPHYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
