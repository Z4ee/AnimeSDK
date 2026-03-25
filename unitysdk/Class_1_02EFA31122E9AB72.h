#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BE0B64AF0A0B070_1;
namespace System { class Type; }

#define CLASS_1_02EFA31122E9AB72_CLEAR_OFFSET UNITYSDK_OFFSET(0x113BFBE0)
#define CLASS_1_02EFA31122E9AB72_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x113BFB60)
#define CLASS_1_02EFA31122E9AB72_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x113BFC80)
#define CLASS_1_02EFA31122E9AB72_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x113BFC30)
#define CLASS_1_02EFA31122E9AB72__CTOR_OFFSET UNITYSDK_OFFSET(0x113BFC90)

inline static constexpr unsigned int Class_1_02EFA31122E9AB72_TypeDefinitionIndex = 54695;

class Class_1_02EFA31122E9AB72 : public ::System::Object
{
public:
	::Class_1_7BE0B64AF0A0B070_1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_7BE0B64AF0A0B070_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BE0B64AF0A0B070_1*))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_7BE0B64AF0A0B070_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7BE0B64AF0A0B070_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
