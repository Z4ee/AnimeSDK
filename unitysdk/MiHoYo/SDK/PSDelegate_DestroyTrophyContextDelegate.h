#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F93FE0)
#define MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F94030)
#define MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F93CF0)
#define MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F93CD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_DestroyTrophyContextDelegate_TypeDefinitionIndex = 6748;

	class PSDelegate_DestroyTrophyContextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 trophyContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_INVOKE_OFFSET))(this, trophyContext);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 trophyContext, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_BEGININVOKE_OFFSET))(this, trophyContext, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_DESTROYTROPHYCONTEXTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
