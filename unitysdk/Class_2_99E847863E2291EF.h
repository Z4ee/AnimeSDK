#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_200.h"
#include "unitysdk/Share/EScenePropertyType.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_249.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_99E847863E2291EF_METHOD_2_0BA8FE097B83A2C5_OFFSET UNITYSDK_OFFSET(0x14F79960)
#define CLASS_2_99E847863E2291EF_METHOD_2_C05AF0F207BA5B1F_OFFSET UNITYSDK_OFFSET(0x14F79930)
#define CLASS_2_99E847863E2291EF_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14F79950)
#define CLASS_2_99E847863E2291EF_METHOD_2_FA5EFB3A13C76C8C_OFFSET UNITYSDK_OFFSET(0x14F79940)
#define CLASS_2_99E847863E2291EF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F798B0)

inline static constexpr unsigned int Class_2_99E847863E2291EF_TypeDefinitionIndex = 11683;

class Class_2_99E847863E2291EF : public ::Class_1_5DA2E7556103D5A3_200
{
public:
	::System::Collections::Generic::List_1<::System::UInt16>* Field_2_0; // 0x60
	::System::Byte Field_2_1; // 0x68

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_249 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_249, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_99E847863E2291EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt16>* Method_2_C05AF0F207BA5B1F()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99E847863E2291EF_METHOD_2_C05AF0F207BA5B1F_OFFSET))(this);
	}

	::System::Byte Method_2_FA5EFB3A13C76C8C()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99E847863E2291EF_METHOD_2_FA5EFB3A13C76C8C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99E847863E2291EF_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Share::EScenePropertyType Method_2_0BA8FE097B83A2C5()
	{
		return ((::Share::EScenePropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99E847863E2291EF_METHOD_2_0BA8FE097B83A2C5_OFFSET))(this);
	}
};
