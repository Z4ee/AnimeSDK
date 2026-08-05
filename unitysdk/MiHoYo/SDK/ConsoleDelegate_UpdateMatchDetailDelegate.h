#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF316B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF316F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF2C010)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_UpdateMatchDetailDelegate_TypeDefinitionIndex = 19759;

	class ConsoleDelegate_UpdateMatchDetailDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_INVOKE_OFFSET))(this, jsonInfo, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_BEGININVOKE_OFFSET))(this, jsonInfo, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHDETAILDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
