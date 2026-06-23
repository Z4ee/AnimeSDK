#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6DC25772A3AD0E96.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_87;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_2E0139C1FD4A0C66_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E4321B0)
#define CLASS_3_2E0139C1FD4A0C66_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E432250)
#define CLASS_3_2E0139C1FD4A0C66_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E431850)
#define CLASS_3_2E0139C1FD4A0C66__CTOR_OFFSET UNITYSDK_OFFSET(0x1E432190)

inline static constexpr unsigned int Class_3_2E0139C1FD4A0C66_TypeDefinitionIndex = 28628;

class Class_3_2E0139C1FD4A0C66 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_2E0139C1FD4A0C66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_0_16E4307DCC419505_87* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*, ::Struct_2_6DC25772A3AD0E96&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2E0139C1FD4A0C66_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_87* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_87*, ::Struct_2_6DC25772A3AD0E96&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2E0139C1FD4A0C66_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::Struct_2_6DC25772A3AD0E96& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6DC25772A3AD0E96&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_2E0139C1FD4A0C66_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
