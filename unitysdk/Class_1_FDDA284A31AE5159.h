#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AttachPointSet;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDDA284A31AE5159_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7B1EC0)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_488C49BFC513F893_OFFSET UNITYSDK_OFFSET(0xA7B1E00)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_7342051C26A859C9_OFFSET UNITYSDK_OFFSET(0xA7B1B90)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xA7B1B20)
#define CLASS_1_FDDA284A31AE5159_METHOD_1_FB13D356201290FA_OFFSET UNITYSDK_OFFSET(0xA7B1CF0)
#define CLASS_1_FDDA284A31AE5159__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B1F50)

inline static constexpr unsigned int Class_1_FDDA284A31AE5159_TypeDefinitionIndex = 63948;

class Class_1_FDDA284A31AE5159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AttachPointSet*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_7342051C26A859C9(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_7342051C26A859C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB13D356201290FA(::AttachPointSet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + CLASS_1_FDDA284A31AE5159_METHOD_1_FB13D356201290FA_OFFSET))(this, a1);
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
