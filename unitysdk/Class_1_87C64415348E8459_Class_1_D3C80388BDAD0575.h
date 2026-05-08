#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CLASS_1_87C64415348E8459_CLASS_1_D3C80388BDAD0575_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x169DF380)
#define CLASS_1_87C64415348E8459_CLASS_1_D3C80388BDAD0575__CTOR_OFFSET UNITYSDK_OFFSET(0x169DF370)

inline static constexpr unsigned int Class_1_87C64415348E8459_Class_1_D3C80388BDAD0575_TypeDefinitionIndex = 60785;

class Class_1_87C64415348E8459_Class_1_D3C80388BDAD0575 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_1; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C64415348E8459_CLASS_1_D3C80388BDAD0575__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C64415348E8459_CLASS_1_D3C80388BDAD0575_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
