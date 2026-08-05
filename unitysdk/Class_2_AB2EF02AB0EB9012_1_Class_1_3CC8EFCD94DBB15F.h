#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AB2EF02AB0EB9012_1;
class Class_3_C85FE8723112A032;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_3CC8EFCD94DBB15F_METHOD_1_D1ABF8F2935345A4_OFFSET UNITYSDK_OFFSET(0x124E7E70)
#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_3CC8EFCD94DBB15F__CTOR_OFFSET UNITYSDK_OFFSET(0x124E7E60)

inline static constexpr unsigned int Class_2_AB2EF02AB0EB9012_1_Class_1_3CC8EFCD94DBB15F_TypeDefinitionIndex = 67541;

class Class_2_AB2EF02AB0EB9012_1_Class_1_3CC8EFCD94DBB15F : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::Class_3_C85FE8723112A032*>* Field_1_0; // 0x10
	::Class_2_AB2EF02AB0EB9012_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_3CC8EFCD94DBB15F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D1ABF8F2935345A4(::System::Boolean a1, ::Class_3_C85FE8723112A032* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_C85FE8723112A032*))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_3CC8EFCD94DBB15F_METHOD_1_D1ABF8F2935345A4_OFFSET))(this, a1, a2);
	}
};
