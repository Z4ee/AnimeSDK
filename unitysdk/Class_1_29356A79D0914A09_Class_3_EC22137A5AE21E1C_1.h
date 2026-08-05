#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_36;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x133F0680)
#define CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x133F06B0)
#define CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x133A1950)
#define CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133B70E0)

inline static constexpr unsigned int Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1_TypeDefinitionIndex = 60435;

class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_36* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_36*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_29356A79D0914A09_CLASS_3_EC22137A5AE21E1C_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
