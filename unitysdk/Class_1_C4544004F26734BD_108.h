#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_14.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_779.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_108_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x1542EAF0)
#define CLASS_1_C4544004F26734BD_108_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1542EE80)
#define CLASS_1_C4544004F26734BD_108_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1542EAE0)
#define CLASS_1_C4544004F26734BD_108_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1542E9F0)
#define CLASS_1_C4544004F26734BD_108_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1542EE70)
#define CLASS_1_C4544004F26734BD_108__CTOR_OFFSET UNITYSDK_OFFSET(0x1542E9E0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_108_TypeDefinitionIndex = 16241;

class Class_1_C4544004F26734BD_108 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_779 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>* Field_1_6; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Byte Field_1_3; // 0x32
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_779 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_779, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_108_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
