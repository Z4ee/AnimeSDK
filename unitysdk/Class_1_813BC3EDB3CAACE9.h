#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_423695772F3F2AA9;
class Class_1_43BD383C98B4C0C5_165;
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_813BC3EDB3CAACE9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1094E160)
#define CLASS_1_813BC3EDB3CAACE9_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1094E090)
#define CLASS_1_813BC3EDB3CAACE9_METHOD_1_D4F6B74D04666A97_OFFSET UNITYSDK_OFFSET(0x1094DAB0)
#define CLASS_1_813BC3EDB3CAACE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1094DAA0)

inline static constexpr unsigned int Class_1_813BC3EDB3CAACE9_TypeDefinitionIndex = 60697;

class Class_1_813BC3EDB3CAACE9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_1_43BD383C98B4C0C5_165*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813BC3EDB3CAACE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D4F6B74D04666A97(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_813BC3EDB3CAACE9_METHOD_1_D4F6B74D04666A97_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_423695772F3F2AA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_423695772F3F2AA9*))((::PBYTE)hIl2Cpp + CLASS_1_813BC3EDB3CAACE9_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813BC3EDB3CAACE9_DISPOSE_OFFSET))(this);
	}
};
