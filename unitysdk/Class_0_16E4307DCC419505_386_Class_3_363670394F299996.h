#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12389670)
#define CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12389700)
#define CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_INVOKE_OFFSET UNITYSDK_OFFSET(0x123892E0)
#define CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996__CTOR_OFFSET UNITYSDK_OFFSET(0x123892C0)

inline static constexpr unsigned int Class_0_16E4307DCC419505_386_Class_3_363670394F299996_TypeDefinitionIndex = 52665;

class Class_0_16E4307DCC419505_386_Class_3_363670394F299996 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_386_CLASS_3_363670394F299996_ENDINVOKE_OFFSET))(this, a1);
	}
};
