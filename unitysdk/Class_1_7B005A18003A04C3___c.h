#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;

#define CLASS_1_7B005A18003A04C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E67A0)
#define CLASS_1_7B005A18003A04C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E67E0)
#define CLASS_1_7B005A18003A04C3___C___CCTOR_B__62_0_OFFSET UNITYSDK_OFFSET(0x1E3E67F0)

inline static constexpr unsigned int Class_1_7B005A18003A04C3___c_TypeDefinitionIndex = 25772;

class Class_1_7B005A18003A04C3___c : public ::System::Object
{
public:
	static ::Class_1_7B005A18003A04C3___c** StaticGet___9()
	{
		return (::Class_1_7B005A18003A04C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B005A18003A04C3___c_TypeDefinitionIndex)->GetStaticField(0x64C30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3___C__CTOR_OFFSET))(this);
	}

	::Class_1_7B005A18003A04C3* __cctor_b__62_0()
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3___C___CCTOR_B__62_0_OFFSET))(this);
	}
};
