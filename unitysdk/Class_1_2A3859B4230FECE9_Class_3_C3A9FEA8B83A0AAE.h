#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE970470)
#define CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE970500)
#define CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE970150)
#define CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE__CTOR_OFFSET UNITYSDK_OFFSET(0xE970130)

inline static constexpr unsigned int Class_1_2A3859B4230FECE9_Class_3_C3A9FEA8B83A0AAE_TypeDefinitionIndex = 73455;

class Class_1_2A3859B4230FECE9_Class_3_C3A9FEA8B83A0AAE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::Cinemachine::CameraState& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2A3859B4230FECE9_CLASS_3_C3A9FEA8B83A0AAE_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
