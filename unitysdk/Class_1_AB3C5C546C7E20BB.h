#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AB3C5C546C7E20BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14248F70)
#define CLASS_1_AB3C5C546C7E20BB_METHOD_1_894A24F1DEB4A399_OFFSET UNITYSDK_OFFSET(0x14249000)
#define CLASS_1_AB3C5C546C7E20BB_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x14248FB0)
#define CLASS_1_AB3C5C546C7E20BB__CTOR_OFFSET UNITYSDK_OFFSET(0x14248C20)

inline static constexpr unsigned int Class_1_AB3C5C546C7E20BB_TypeDefinitionIndex = 72470;

class Class_1_AB3C5C546C7E20BB : public ::System::Object
{
public:
	::Class_2_2090B77B5C7838F2* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* Field_1_1; // 0x18
	::Class_3_543326C044264182* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_1_894A24F1DEB4A399(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_METHOD_1_894A24F1DEB4A399_OFFSET))(this, a1);
	}
};
