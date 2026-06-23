#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2E4E5AFB9A71CC38_METHOD_1_C7E6EA7E7C8F6152_OFFSET UNITYSDK_OFFSET(0x12837030)
#define CLASS_1_2E4E5AFB9A71CC38_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x12836FD0)
#define CLASS_1_2E4E5AFB9A71CC38__CTOR_OFFSET UNITYSDK_OFFSET(0x12836F10)

inline static constexpr unsigned int Class_1_2E4E5AFB9A71CC38_TypeDefinitionIndex = 67771;

class Class_1_2E4E5AFB9A71CC38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4E5AFB9A71CC38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E4E5AFB9A71CC38_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C7E6EA7E7C8F6152(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E4E5AFB9A71CC38_METHOD_1_C7E6EA7E7C8F6152_OFFSET))(this, a1);
	}
};
