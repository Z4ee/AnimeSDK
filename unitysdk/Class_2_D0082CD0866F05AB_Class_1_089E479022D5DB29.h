#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_993FB8DDEDFEC00B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D0082CD0866F05AB_CLASS_1_089E479022D5DB29_METHOD_1_5776FB86FEF8CA51_OFFSET UNITYSDK_OFFSET(0x150BECD0)
#define CLASS_2_D0082CD0866F05AB_CLASS_1_089E479022D5DB29__CTOR_OFFSET UNITYSDK_OFFSET(0x150BECC0)

inline static constexpr unsigned int Class_2_D0082CD0866F05AB_Class_1_089E479022D5DB29_TypeDefinitionIndex = 68431;

class Class_2_D0082CD0866F05AB_Class_1_089E479022D5DB29 : public ::System::Object
{
public:
	::System::Func_2<::Class_3_993FB8DDEDFEC00B*, ::System::Boolean>* Field_1_0; // 0x10
	::Class_3_993FB8DDEDFEC00B* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB_CLASS_1_089E479022D5DB29__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5776FB86FEF8CA51(::Class_3_993FB8DDEDFEC00B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_993FB8DDEDFEC00B*))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB_CLASS_1_089E479022D5DB29_METHOD_1_5776FB86FEF8CA51_OFFSET))(this, a1);
	}
};
