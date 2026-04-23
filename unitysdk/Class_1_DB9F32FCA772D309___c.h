#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A.h"
#include "unitysdk/System/Object.h"

class Class_1_DB9F32FCA772D309;

#define CLASS_1_DB9F32FCA772D309___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197750C0)
#define CLASS_1_DB9F32FCA772D309___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19775100)
#define CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x19775110)
#define CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x19775160)
#define CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x19775170)

inline static constexpr unsigned int Class_1_DB9F32FCA772D309___c_TypeDefinitionIndex = 23952;

class Class_1_DB9F32FCA772D309___c : public ::System::Object
{
public:
	static ::Class_1_DB9F32FCA772D309___c** StaticGet___9()
	{
		return (::Class_1_DB9F32FCA772D309___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB9F32FCA772D309___c_TypeDefinitionIndex)->GetStaticField(0x5C7B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309___C__CTOR_OFFSET))(this);
	}

	::Class_1_DB9F32FCA772D309* __cctor_b__33_0()
	{
		return ((::Class_1_DB9F32FCA772D309*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__33_1(::Enum_3_4608E37A1B3D374A x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_4608E37A1B3D374A))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_1_OFFSET))(this, x);
	}

	::Enum_3_4608E37A1B3D374A __cctor_b__33_2(::System::Int32 x)
	{
		return ((::Enum_3_4608E37A1B3D374A(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309___C___CCTOR_B__33_2_OFFSET))(this, x);
	}
};
