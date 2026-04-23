#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_313;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Component; }

#define CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x96113D0)
#define CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9611400)
#define CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_INVOKE_OFFSET UNITYSDK_OFFSET(0x9610E70)
#define CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8__CTOR_OFFSET UNITYSDK_OFFSET(0x9610A50)

inline static constexpr unsigned int Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8_TypeDefinitionIndex = 45681;

class Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_313* Invoke(::UnityEngine::Component* a1)
	{
		return ((::Class_0_16E4307DCC419505_313*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Component* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Component*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_313* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_313*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_CLASS_3_B8B36145F8ED68E8_ENDINVOKE_OFFSET))(this, a1);
	}
};
