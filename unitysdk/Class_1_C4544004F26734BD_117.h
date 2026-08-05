#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_185.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_117_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1AF99BF0)
#define CLASS_1_C4544004F26734BD_117_METHOD_1_75D0422F760341EE_1_OFFSET UNITYSDK_OFFSET(0x1AF99900)
#define CLASS_1_C4544004F26734BD_117_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1AF99510)
#define CLASS_1_C4544004F26734BD_117_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AF99D30)
#define CLASS_1_C4544004F26734BD_117_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1AF99810)
#define CLASS_1_C4544004F26734BD_117_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AF99800)
#define CLASS_1_C4544004F26734BD_117__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF99500)

inline static constexpr unsigned int Class_1_C4544004F26734BD_117_TypeDefinitionIndex = 16861;

class Class_1_C4544004F26734BD_117 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x20
	::Struct_2_58DF5669875F2C66_185 Field_1_1; // 0x28
	::System::Byte Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::Byte Field_1_5; // 0x3A
	::System::Int32 Field_1_4; // 0x3C

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_185 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_185, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_75D0422F760341EE_1_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_117_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
