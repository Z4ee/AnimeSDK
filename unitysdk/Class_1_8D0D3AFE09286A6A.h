#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D0D3AFE09286A6A_EQUALS_OFFSET UNITYSDK_OFFSET(0x157DF370)
#define CLASS_1_8D0D3AFE09286A6A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x157DF3D0)
#define CLASS_1_8D0D3AFE09286A6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x157DF430)
#define CLASS_1_8D0D3AFE09286A6A__CTOR_OFFSET UNITYSDK_OFFSET(0x157DF420)

inline static constexpr unsigned int Class_1_8D0D3AFE09286A6A_TypeDefinitionIndex = 49563;

class Class_1_8D0D3AFE09286A6A : public ::System::Object
{
public:
	static ::Class_1_8D0D3AFE09286A6A** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_8D0D3AFE09286A6A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D0D3AFE09286A6A_TypeDefinitionIndex)->GetStaticField(0x47AF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D0D3AFE09286A6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D0D3AFE09286A6A__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D0D3AFE09286A6A_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D0D3AFE09286A6A_GETHASHCODE_OFFSET))(this, a1);
	}
};
