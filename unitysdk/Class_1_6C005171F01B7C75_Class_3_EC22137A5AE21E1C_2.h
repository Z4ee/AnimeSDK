#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_316;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15906DB0)
#define CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15906DE0)
#define CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x159056C0)
#define CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15906DA0)

inline static constexpr unsigned int Class_1_6C005171F01B7C75_Class_3_EC22137A5AE21E1C_2_TypeDefinitionIndex = 44086;

class Class_1_6C005171F01B7C75_Class_3_EC22137A5AE21E1C_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_316*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_316*&))((::PBYTE)hIl2Cpp + CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_316*& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_316*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Class_0_16E4307DCC419505_316*& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_316*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_6C005171F01B7C75_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
