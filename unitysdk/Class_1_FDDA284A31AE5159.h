#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AttachPointSet;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDDA284A31AE5159_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB015D0)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_488C49BFC513F893_OFFSET UNITYSDK_OFFSET(0xBB01510)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xBB01330)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_CF92560AFC809866_OFFSET UNITYSDK_OFFSET(0xBB01480)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_E45DC0F98C2136A0_OFFSET UNITYSDK_OFFSET(0xBB013A0)
#define CLASS_1_FDDA284A31AE5159__CTOR_OFFSET UNITYSDK_OFFSET(0xBB01660)

inline static constexpr unsigned int Class_1_FDDA284A31AE5159_TypeDefinitionIndex = 68331;

class Class_1_FDDA284A31AE5159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AttachPointSet*>* MKMGGHJDEAF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_E45DC0F98C2136A0(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_E45DC0F98C2136A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF92560AFC809866(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_CF92560AFC809866_OFFSET))(this, a1);
	}

	::System::Void Method_1_488C49BFC513F893(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_488C49BFC513F893_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_DISPOSE_OFFSET))(this);
	}
};
