#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x164585C0)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x164585F0)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16437F90)
#define CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16458550)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_AxisInputDelegate_TypeDefinitionIndex = 38515;

	class CinemachineCore_AxisInputDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_AXISINPUTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
