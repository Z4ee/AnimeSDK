#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10;
class Class_1_BFC2F9D5895EB2FB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1536E0A0)
#define CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1536E120)
#define CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_INVOKE_OFFSET UNITYSDK_OFFSET(0x1536DD80)
#define CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78__CTOR_OFFSET UNITYSDK_OFFSET(0x1536DD60)

inline static constexpr unsigned int Class_3_C59390AC47D3E7E0_Class_3_630F2A9003052F78_TypeDefinitionIndex = 48330;

class Class_3_C59390AC47D3E7E0_Class_3_630F2A9003052F78 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10* Invoke(::System::Int32 a1, ::Class_1_BFC2F9D5895EB2FB* a2)
	{
		return ((::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*(*)(::PVOID, ::System::Int32, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Class_1_BFC2F9D5895EB2FB* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Class_1_BFC2F9D5895EB2FB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0_CLASS_3_630F2A9003052F78_ENDINVOKE_OFFSET))(this, a1);
	}
};
