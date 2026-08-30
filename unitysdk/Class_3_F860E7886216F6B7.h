#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_350;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F860E7886216F6B7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C70C1B0)
#define CLASS_3_F860E7886216F6B7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C70C1F0)
#define CLASS_3_F860E7886216F6B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C70C1A0)
#define CLASS_3_F860E7886216F6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70C0B0)

inline static constexpr unsigned int Class_3_F860E7886216F6B7_TypeDefinitionIndex = 44001;

class Class_3_F860E7886216F6B7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F860E7886216F6B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Object* a1, ::Class_0_16E4307DCC419505_350* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + CLASS_3_F860E7886216F6B7_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::Class_0_16E4307DCC419505_350* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_350*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F860E7886216F6B7_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F860E7886216F6B7_ENDINVOKE_OFFSET))(this, a1);
	}
};
