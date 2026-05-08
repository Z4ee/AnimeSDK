#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_BF85135934DD45B5;
class Class_2_CD42631606067E6B;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x13265EB0)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x13266370)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30__CTOR_OFFSET UNITYSDK_OFFSET(0x13265EA0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Class_1_E36FFF72B674CA30_TypeDefinitionIndex = 67680;

class Class_1_1D0F14FBEE98E5ED_Class_1_E36FFF72B674CA30 : public ::System::Object
{
public:
	::Class_1_3002D7CF5FEE9D3A* Field_1_1; // 0x10
	::Class_2_CD42631606067E6B* Field_1_4; // 0x18
	::Class_1_1D0F14FBEE98E5ED* Field_1_0; // 0x20
	::System::Action* Field_1_6; // 0x28
	::Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7* Field_1_2; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_5; // 0x38
	::Class_1_BF85135934DD45B5* Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_E36FFF72B674CA30_METHOD_1_82E992240300FB30_OFFSET))(this);
	}
};
