#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_425;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E8FF90)
#define CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E8FFD0)
#define CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E8ED80)
#define CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8FEA0)

inline static constexpr unsigned int Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE_1_TypeDefinitionIndex = 80517;

class Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Sofa::BaseSofaUI3DWindow* Invoke(::Class_0_16E4307DCC419505_425* a1, ::System::Object* a2)
	{
		return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::Class_0_16E4307DCC419505_425*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_425* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_425*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Sofa::BaseSofaUI3DWindow* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_CLASS_3_285756F0CC45F6AE_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
