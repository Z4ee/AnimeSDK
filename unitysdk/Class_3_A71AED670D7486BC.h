#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_4C71EF04B2D31519;
class Class_1_A3AC0B6B344CF5CC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A71AED670D7486BC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18D4A7B0)
#define CLASS_3_A71AED670D7486BC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18D4A7F0)
#define CLASS_3_A71AED670D7486BC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18D4A230)
#define CLASS_3_A71AED670D7486BC__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4A220)

inline static constexpr unsigned int Class_3_A71AED670D7486BC_TypeDefinitionIndex = 42930;

class Class_3_A71AED670D7486BC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_4C71EF04B2D31519* a1, ::Class_1_A3AC0B6B344CF5CC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*, ::Class_1_A3AC0B6B344CF5CC*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_4C71EF04B2D31519* a1, ::Class_1_A3AC0B6B344CF5CC* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_4C71EF04B2D31519*, ::Class_1_A3AC0B6B344CF5CC*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_ENDINVOKE_OFFSET))(this, a1);
	}
};
