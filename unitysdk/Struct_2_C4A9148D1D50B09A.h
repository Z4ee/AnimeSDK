#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C4CECDD2BFB0A914.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_552;

#define STRUCT_2_C4A9148D1D50B09A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D8F40)
#define STRUCT_2_C4A9148D1D50B09A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7D9000)
#define STRUCT_2_C4A9148D1D50B09A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7D9060)
#define STRUCT_2_C4A9148D1D50B09A_METHOD_2_A1F5DCDA099A81E7_OFFSET UNITYSDK_OFFSET(0x7D8F90)
#define STRUCT_2_C4A9148D1D50B09A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C35000)
#define STRUCT_2_C4A9148D1D50B09A__CTOR_OFFSET UNITYSDK_OFFSET(0x7D8EB0)

inline static constexpr unsigned int Struct_2_C4A9148D1D50B09A_TypeDefinitionIndex = 56345;

struct alignas(8) Struct_2_C4A9148D1D50B09A
{
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C4A9148D1D50B09A_TypeDefinitionIndex)->GetStaticField(0x10130);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::Enum_3_C4CECDD2BFB0A914 Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_552* Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::Class_0_16E4307DCC419505_552* a2, ::Enum_3_C4CECDD2BFB0A914 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_552*, ::Enum_3_C4CECDD2BFB0A914))((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A__CCTOR_OFFSET))();
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_A1F5DCDA099A81E7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A_METHOD_2_A1F5DCDA099A81E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4A9148D1D50B09A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
