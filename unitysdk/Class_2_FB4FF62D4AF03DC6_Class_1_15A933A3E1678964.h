#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_77794C962ABD89A9;
class Class_2_FB4FF62D4AF03DC6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_METHOD_1_C3FC5A0CF5C9C41D_OFFSET UNITYSDK_OFFSET(0xD35B5F0)
#define CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964__CTOR_OFFSET UNITYSDK_OFFSET(0xD35B5E0)

inline static constexpr unsigned int Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964_TypeDefinitionIndex = 69209;

class Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964 : public ::System::Object
{
public:
	::Class_2_77794C962ABD89A9* Field_1_2; // 0x10
	::Class_2_FB4FF62D4AF03DC6* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Threading::CancellationToken Field_1_4; // 0x28
	::Struct_2_D7E802D2192B688B Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_C3FC5A0CF5C9C41D()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_METHOD_1_C3FC5A0CF5C9C41D_OFFSET))(this);
	}
};
