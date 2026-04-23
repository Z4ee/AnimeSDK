#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_45666FF47F0D254B;
class Class_1_F236C4DB0600E05D;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A71AED670D7486BC_7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11E656E0)
#define CLASS_3_A71AED670D7486BC_7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11E65720)
#define CLASS_3_A71AED670D7486BC_7_INVOKE_OFFSET UNITYSDK_OFFSET(0x11E65160)
#define CLASS_3_A71AED670D7486BC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x11E65140)

inline static constexpr unsigned int Class_3_A71AED670D7486BC_7_TypeDefinitionIndex = 57221;

class Class_3_A71AED670D7486BC_7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_F236C4DB0600E05D* a1, ::Class_1_45666FF47F0D254B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::Class_1_45666FF47F0D254B*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_7_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_F236C4DB0600E05D* a1, ::Class_1_45666FF47F0D254B* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::Class_1_45666FF47F0D254B*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_7_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_7_ENDINVOKE_OFFSET))(this, a1);
	}
};
