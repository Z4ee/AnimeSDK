#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4127EA2E8A175737.h"

class Class_0_16E4307DCC419505_866;
class Class_0_16E4307DCC419505_874;
class Class_4_B21A50BB32C03FF0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EC6259E2898C3D9C_METHOD_3_318AF0F1EBA87E1C_OFFSET UNITYSDK_OFFSET(0x13ADD250)
#define CLASS_3_EC6259E2898C3D9C_METHOD_3_74536FB86B1DF8C2_OFFSET UNITYSDK_OFFSET(0x13ADD3D0)
#define CLASS_3_EC6259E2898C3D9C_METHOD_3_9A3154F166623E00_OFFSET UNITYSDK_OFFSET(0x13ADD410)
#define CLASS_3_EC6259E2898C3D9C__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADD210)

inline static constexpr unsigned int Class_3_EC6259E2898C3D9C_TypeDefinitionIndex = 62878;

class Class_3_EC6259E2898C3D9C : public ::Class_2_4127EA2E8A175737
{
public:
	::Class_0_16E4307DCC419505_866* Field_3_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* Field_3_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_866* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_3_EC6259E2898C3D9C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_318AF0F1EBA87E1C(::Class_4_B21A50BB32C03FF0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B21A50BB32C03FF0*))((::PBYTE)hIl2Cpp + CLASS_3_EC6259E2898C3D9C_METHOD_3_318AF0F1EBA87E1C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* Method_3_74536FB86B1DF8C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC6259E2898C3D9C_METHOD_3_74536FB86B1DF8C2_OFFSET))(this);
	}

	::System::Void Method_3_9A3154F166623E00(::Class_4_B21A50BB32C03FF0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B21A50BB32C03FF0*))((::PBYTE)hIl2Cpp + CLASS_3_EC6259E2898C3D9C_METHOD_3_9A3154F166623E00_OFFSET))(this, a1);
	}
};
