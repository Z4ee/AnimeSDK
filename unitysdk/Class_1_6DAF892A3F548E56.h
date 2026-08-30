#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_6DAF892A3F548E56_METHOD_1_E5B30A822D766522_OFFSET UNITYSDK_OFFSET(0x1E5B06F0)
#define CLASS_1_6DAF892A3F548E56__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B0AB0)
#define CLASS_1_6DAF892A3F548E56__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B06E0)

inline static constexpr unsigned int Class_1_6DAF892A3F548E56_TypeDefinitionIndex = 42508;

class Class_1_6DAF892A3F548E56 : public ::System::Object
{
public:
	static ::Class_1_6DAF892A3F548E56** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_6DAF892A3F548E56**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF892A3F548E56_TypeDefinitionIndex)->GetStaticField(0x53E50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAF892A3F548E56__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF892A3F548E56__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_E5B30A822D766522(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF892A3F548E56_METHOD_1_E5B30A822D766522_OFFSET))(this, a1, a2);
	}
};
