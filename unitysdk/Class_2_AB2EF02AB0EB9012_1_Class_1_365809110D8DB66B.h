#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AB2EF02AB0EB9012_1;
class Class_3_C85FE8723112A032;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_365809110D8DB66B_METHOD_1_A431FCDD94838DF0_OFFSET UNITYSDK_OFFSET(0x182108A0)
#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_365809110D8DB66B__CTOR_OFFSET UNITYSDK_OFFSET(0x18210890)

inline static constexpr unsigned int Class_2_AB2EF02AB0EB9012_1_Class_1_365809110D8DB66B_TypeDefinitionIndex = 67550;

class Class_2_AB2EF02AB0EB9012_1_Class_1_365809110D8DB66B : public ::System::Object
{
public:
	::Class_2_AB2EF02AB0EB9012_1* Field_1_1; // 0x10
	::System::Action_2<::System::Boolean, ::Class_3_C85FE8723112A032*>* Field_1_7; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_365809110D8DB66B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A431FCDD94838DF0(::System::Boolean a1, ::Class_3_C85FE8723112A032* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_C85FE8723112A032*))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_1_365809110D8DB66B_METHOD_1_A431FCDD94838DF0_OFFSET))(this, a1, a2);
	}
};
