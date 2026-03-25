#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_315842A41C3BE9C8;
class Class_1_D4A8E06EA4E680A0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6041ED8E42CCA413_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114332F0)
#define CLASS_1_6041ED8E42CCA413_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x11433120)
#define CLASS_1_6041ED8E42CCA413_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x11432E40)
#define CLASS_1_6041ED8E42CCA413_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x114331A0)
#define CLASS_1_6041ED8E42CCA413_METHOD_1_D2137279AC5A0BF7_OFFSET UNITYSDK_OFFSET(0x11432FF0)
#define CLASS_1_6041ED8E42CCA413_METHOD_1_F433929C8572B123_OFFSET UNITYSDK_OFFSET(0x11432EB0)
#define CLASS_1_6041ED8E42CCA413__CTOR_OFFSET UNITYSDK_OFFSET(0x11433340)

inline static constexpr unsigned int Class_1_6041ED8E42CCA413_TypeDefinitionIndex = 56830;

class Class_1_6041ED8E42CCA413 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_315842A41C3BE9C8*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_F433929C8572B123(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_METHOD_1_F433929C8572B123_OFFSET))(this, a1);
	}

	::Class_1_315842A41C3BE9C8* Method_1_D2137279AC5A0BF7(::System::Collections::Generic::List_1<::Class_1_D4A8E06EA4E680A0*>* a1)
	{
		return ((::Class_1_315842A41C3BE9C8*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D4A8E06EA4E680A0*>*))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_METHOD_1_D2137279AC5A0BF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_05679872695EE5DE(::Class_1_315842A41C3BE9C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_315842A41C3BE9C8*))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_METHOD_1_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6041ED8E42CCA413_DISPOSE_OFFSET))(this);
	}
};
