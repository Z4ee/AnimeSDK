#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_224.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_118_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1607CDE0)
#define CLASS_1_C4544004F26734BD_118_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1607CAE0)
#define CLASS_1_C4544004F26734BD_118_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1607CDD0)
#define CLASS_1_C4544004F26734BD_118_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1607C9F0)
#define CLASS_1_C4544004F26734BD_118_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1607C9E0)
#define CLASS_1_C4544004F26734BD_118__CTOR_OFFSET UNITYSDK_OFFSET(0x1607C9D0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_118_TypeDefinitionIndex = 17193;

class Class_1_C4544004F26734BD_118 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x18
	::Struct_2_58DF5669875F2C66_224 Field_1_0; // 0x20
	::System::Int32 Field_1_11; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Byte Field_1_5; // 0x35
	::System::Byte Field_1_4; // 0x36
	::System::Int32 Field_1_10; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_224 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_224, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_118_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
