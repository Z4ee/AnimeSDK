#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C857964561B1FE61_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1290E590)
#define CLASS_1_C857964561B1FE61_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1290E640)
#define CLASS_1_C857964561B1FE61_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x1290E5F0)
#define CLASS_1_C857964561B1FE61_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1290E690)
#define CLASS_1_C857964561B1FE61__CTOR_OFFSET UNITYSDK_OFFSET(0x1290E580)

inline static constexpr unsigned int Class_1_C857964561B1FE61_TypeDefinitionIndex = 90585;

class Class_1_C857964561B1FE61 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
