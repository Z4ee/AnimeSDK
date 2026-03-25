#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15ED9850)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15ED9880)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15ED9300)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED92E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_UpdateStatisticsDelegate_TypeDefinitionIndex = 6686;

	class ConsoleDelegate_UpdateStatisticsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_INVOKE_OFFSET))(this, jsonString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_BEGININVOKE_OFFSET))(this, jsonString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATESTATISTICSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
