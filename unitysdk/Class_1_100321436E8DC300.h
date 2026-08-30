#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_100321436E8DC300_METHOD_1_E248AA79C8CD7C65_OFFSET UNITYSDK_OFFSET(0x1E5AF410)
#define CLASS_1_100321436E8DC300_METHOD_1_E4EA0D887068AE1D_OFFSET UNITYSDK_OFFSET(0x1E5AF4E0)
#define CLASS_1_100321436E8DC300__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF570)

inline static constexpr unsigned int Class_1_100321436E8DC300_TypeDefinitionIndex = 42400;

class Class_1_100321436E8DC300 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_100321436E8DC300__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_E248AA79C8CD7C65(::System::Object* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_100321436E8DC300_METHOD_1_E248AA79C8CD7C65_OFFSET))(this, a1);
	}

	::System::Object* Method_1_E4EA0D887068AE1D(::System::Object* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_100321436E8DC300_METHOD_1_E4EA0D887068AE1D_OFFSET))(this, a1);
	}
};
