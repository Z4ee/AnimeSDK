#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_F62E271ACC145A5D_CLASS_1_92582D24722789DD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10F623A0)
#define CLASS_3_F62E271ACC145A5D_CLASS_1_92582D24722789DD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F62390)

inline static constexpr unsigned int Class_3_F62E271ACC145A5D_Class_1_92582D24722789DD_TypeDefinitionIndex = 69887;

class Class_3_F62E271ACC145A5D_Class_1_92582D24722789DD : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F62E271ACC145A5D_CLASS_1_92582D24722789DD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F62E271ACC145A5D_CLASS_1_92582D24722789DD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
