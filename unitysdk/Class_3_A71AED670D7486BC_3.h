#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0C8F8589C8105F3E;
class Class_1_DD584E66F5D339D3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A71AED670D7486BC_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16734050)
#define CLASS_3_A71AED670D7486BC_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16734090)
#define CLASS_3_A71AED670D7486BC_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x16733AD0)
#define CLASS_3_A71AED670D7486BC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16733AB0)

inline static constexpr unsigned int Class_3_A71AED670D7486BC_3_TypeDefinitionIndex = 28377;

class Class_3_A71AED670D7486BC_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_DD584E66F5D339D3* a1, ::Class_1_0C8F8589C8105F3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD584E66F5D339D3*, ::Class_1_0C8F8589C8105F3E*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_3_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_DD584E66F5D339D3* a1, ::Class_1_0C8F8589C8105F3E* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_DD584E66F5D339D3*, ::Class_1_0C8F8589C8105F3E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_3_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
