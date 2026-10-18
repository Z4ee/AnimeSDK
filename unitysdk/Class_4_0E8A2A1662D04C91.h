#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E251F5157D56E603.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_14861C437A9CC43A.h"
#include "unitysdk/System/Threading/CancellationToken.h"

#define CLASS_4_0E8A2A1662D04C91_METHOD_4_CA00CB7BB37F37A6_OFFSET UNITYSDK_OFFSET(0x1EC66810)
#define CLASS_4_0E8A2A1662D04C91__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC667F0)

inline static constexpr unsigned int Class_4_0E8A2A1662D04C91_TypeDefinitionIndex = 44190;

class Class_4_0E8A2A1662D04C91 : public ::Class_3_E251F5157D56E603<::Struct_2_14861C437A9CC43A>
{
public:
	::System::Void _ctor(::Struct_2_14861C437A9CC43A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_14861C437A9CC43A))((::PBYTE)hIl2Cpp + CLASS_4_0E8A2A1662D04C91__CTOR_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_4_CA00CB7BB37F37A6(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_0E8A2A1662D04C91_METHOD_4_CA00CB7BB37F37A6_OFFSET))(this, a1);
	}
};
