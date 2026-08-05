#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_343.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_119_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x169893D0)
#define CLASS_1_C4544004F26734BD_119_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x169896C0)
#define CLASS_1_C4544004F26734BD_119_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x169892E0)
#define CLASS_1_C4544004F26734BD_119_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x169892D0)
#define CLASS_1_C4544004F26734BD_119__CTOR_OFFSET UNITYSDK_OFFSET(0x169892C0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_119_TypeDefinitionIndex = 17550;

class Class_1_C4544004F26734BD_119 : public ::System::Object
{
public:
	::Struct_2_58DF5669875F2C66_343 Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::System::Byte Field_1_7; // 0x34
	::System::Byte Field_1_0; // 0x35
	::System::Boolean Field_1_1; // 0x36

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_343 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_343, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_119__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_119_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_119_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_119_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_119_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
