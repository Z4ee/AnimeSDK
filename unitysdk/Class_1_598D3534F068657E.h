#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DFF28B1BAA582E14;
class Class_3_98C806684F7CC372_13;

#define CLASS_1_598D3534F068657E_CLEAR_OFFSET UNITYSDK_OFFSET(0x15CCD090)
#define CLASS_1_598D3534F068657E_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15CCD0E0)
#define CLASS_1_598D3534F068657E__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCD150)

inline static constexpr unsigned int Class_1_598D3534F068657E_TypeDefinitionIndex = 54229;

class Class_1_598D3534F068657E : public ::System::Object
{
public:
	::Class_3_98C806684F7CC372_13* BDNOLADKBCL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598D3534F068657E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598D3534F068657E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_DFF28B1BAA582E14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + CLASS_1_598D3534F068657E_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
