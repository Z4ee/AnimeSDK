#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0B711C9DAE503A1B_METHOD_1_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0x14CC34A0)
#define CLASS_1_0B711C9DAE503A1B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14CC3490)
#define CLASS_1_0B711C9DAE503A1B_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x14CC3360)
#define CLASS_1_0B711C9DAE503A1B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14CC3340)
#define CLASS_1_0B711C9DAE503A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC3350)

inline static constexpr unsigned int Class_1_0B711C9DAE503A1B_TypeDefinitionIndex = 59123;

class Class_1_0B711C9DAE503A1B : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_METHOD_1_C1EB52A4F4431ADE_OFFSET))(this);
	}
};
