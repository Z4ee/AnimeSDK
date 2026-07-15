#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC0F8AEEF044EF7C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9DDA2386E2739440_METHOD_1_4207E90804512D1E_OFFSET UNITYSDK_OFFSET(0x1453ECE0)
#define CLASS_1_9DDA2386E2739440_METHOD_1_952E36B73124B39C_OFFSET UNITYSDK_OFFSET(0x1453ED70)
#define CLASS_1_9DDA2386E2739440__CTOR_OFFSET UNITYSDK_OFFSET(0x1453EF10)

inline static constexpr unsigned int Class_1_9DDA2386E2739440_TypeDefinitionIndex = 58664;

class Class_1_9DDA2386E2739440 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CC0F8AEEF044EF7C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_CC0F8AEEF044EF7C*>* Method_1_4207E90804512D1E()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_CC0F8AEEF044EF7C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440_METHOD_1_4207E90804512D1E_OFFSET))(this);
	}

	::Class_1_CC0F8AEEF044EF7C* Method_1_952E36B73124B39C(::System::UInt32 a1)
	{
		return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440_METHOD_1_952E36B73124B39C_OFFSET))(this, a1);
	}
};
