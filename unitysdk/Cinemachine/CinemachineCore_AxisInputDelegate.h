#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B7BC60)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B7BC90)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B5C7A0)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7BC40)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_AxisInputDelegate_TypeDefinitionIndex = 36574;

	class CinemachineCore_AxisInputDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::System::String* axisName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_INVOKE_OFFSET))(this, axisName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* axisName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_BEGININVOKE_OFFSET))(this, axisName, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
