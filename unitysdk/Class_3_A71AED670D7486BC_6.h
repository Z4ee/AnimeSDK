#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_F22209B682E3C231;
class Class_1_FF872820A2FF123B;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A71AED670D7486BC_6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A585400)
#define CLASS_3_A71AED670D7486BC_6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A585440)
#define CLASS_3_A71AED670D7486BC_6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A5853F0)
#define CLASS_3_A71AED670D7486BC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A585300)

inline static constexpr unsigned int Class_3_A71AED670D7486BC_6_TypeDefinitionIndex = 35569;

class Class_3_A71AED670D7486BC_6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_F22209B682E3C231* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_F22209B682E3C231*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_6_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_F22209B682E3C231* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_F22209B682E3C231*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_6_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A71AED670D7486BC_6_ENDINVOKE_OFFSET))(this, a1);
	}
};
