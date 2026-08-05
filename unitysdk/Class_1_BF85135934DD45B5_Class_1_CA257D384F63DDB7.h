#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_BF85135934DD45B5;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_BF85135934DD45B5_CLASS_1_CA257D384F63DDB7_METHOD_1_64CD64E6077FA034_OFFSET UNITYSDK_OFFSET(0x13894D30)
#define CLASS_1_BF85135934DD45B5_CLASS_1_CA257D384F63DDB7__CTOR_OFFSET UNITYSDK_OFFSET(0x138938E0)

inline static constexpr unsigned int Class_1_BF85135934DD45B5_Class_1_CA257D384F63DDB7_TypeDefinitionIndex = 78303;

class Class_1_BF85135934DD45B5_Class_1_CA257D384F63DDB7 : public ::System::Object
{
public:
	::Class_1_BF85135934DD45B5* Field_1_7; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_CLASS_1_CA257D384F63DDB7__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_64CD64E6077FA034()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_CLASS_1_CA257D384F63DDB7_METHOD_1_64CD64E6077FA034_OFFSET))(this);
	}
};
