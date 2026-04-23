#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AttachPointSet;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_179E962C3086166B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90B76A0)
#define CLASS_1_179E962C3086166B_METHOD_1_62F307C639144383_OFFSET UNITYSDK_OFFSET(0x90B7560)
#define CLASS_1_179E962C3086166B_METHOD_1_76CD322F64437C8D_OFFSET UNITYSDK_OFFSET(0x90B74D0)
#define CLASS_1_179E962C3086166B_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x90B7460)
#define CLASS_1_179E962C3086166B_METHOD_1_EA7B45159B5BCCAD_OFFSET UNITYSDK_OFFSET(0x90B75F0)
#define CLASS_1_179E962C3086166B__CTOR_OFFSET UNITYSDK_OFFSET(0x90B7710)

inline static constexpr unsigned int Class_1_179E962C3086166B_TypeDefinitionIndex = 63033;

class Class_1_179E962C3086166B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AttachPointSet*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_76CD322F64437C8D(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B_METHOD_1_76CD322F64437C8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_62F307C639144383(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B_METHOD_1_62F307C639144383_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA7B45159B5BCCAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B_METHOD_1_EA7B45159B5BCCAD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179E962C3086166B_DISPOSE_OFFSET))(this);
	}
};
