#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD893FD36F6A3A6D_5;
namespace System { class Type; }

#define CLASS_1_02EFA31122E9AB72_CLEAR_OFFSET UNITYSDK_OFFSET(0x17DAF530)
#define CLASS_1_02EFA31122E9AB72_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x17DAF4B0)
#define CLASS_1_02EFA31122E9AB72_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17DAF580)
#define CLASS_1_02EFA31122E9AB72_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17DAF5D0)
#define CLASS_1_02EFA31122E9AB72__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAF610)

inline static constexpr unsigned int Class_1_02EFA31122E9AB72_TypeDefinitionIndex = 64183;

class Class_1_02EFA31122E9AB72 : public ::System::Object
{
public:
	::Class_1_FD893FD36F6A3A6D_5* Field_1_0; // 0x10

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

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_FD893FD36F6A3A6D_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_5*))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_FD893FD36F6A3A6D_5* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_FD893FD36F6A3A6D_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EFA31122E9AB72_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
