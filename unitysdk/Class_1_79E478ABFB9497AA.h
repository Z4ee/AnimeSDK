#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_79E478ABFB9497AA_METHOD_1_8F017692F67415AE_OFFSET UNITYSDK_OFFSET(0x15810430)
#define CLASS_1_79E478ABFB9497AA__CTOR_OFFSET UNITYSDK_OFFSET(0x158105C0)

inline static constexpr unsigned int Class_1_79E478ABFB9497AA_TypeDefinitionIndex = 78680;

class Class_1_79E478ABFB9497AA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79E478ABFB9497AA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8F017692F67415AE(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79E478ABFB9497AA_METHOD_1_8F017692F67415AE_OFFSET))(this, a1, a2, a3);
	}
};
