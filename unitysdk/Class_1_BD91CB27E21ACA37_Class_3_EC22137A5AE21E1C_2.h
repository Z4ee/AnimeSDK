#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_217;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF6268A0)
#define CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF6268D0)
#define CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xF6265B0)
#define CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF626590)

inline static constexpr unsigned int Class_1_BD91CB27E21ACA37_Class_3_EC22137A5AE21E1C_2_TypeDefinitionIndex = 46866;

class Class_1_BD91CB27E21ACA37_Class_3_EC22137A5AE21E1C_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_217*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&))((::PBYTE)hIl2Cpp + CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_217*& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Class_0_16E4307DCC419505_217*& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_BD91CB27E21ACA37_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
