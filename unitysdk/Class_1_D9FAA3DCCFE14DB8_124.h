#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_250.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1712D4C0)
#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x1712D7C0)
#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1712D930)
#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1712D7B0)
#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1712DA80)
#define CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1712D920)
#define CLASS_1_D9FAA3DCCFE14DB8_124__CTOR_OFFSET UNITYSDK_OFFSET(0x1712D4B0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_124_TypeDefinitionIndex = 17584;

class Class_1_D9FAA3DCCFE14DB8_124 : public ::System::Object
{
public:
	::System::String* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x18
	::Struct_2_3E75877A2888D88A_250 Field_1_0; // 0x20
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x30
	::System::Int32 Field_1_9; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Byte Field_1_4; // 0x40
	::System::Byte Field_1_3; // 0x41
	::System::Boolean Field_1_7; // 0x42
	::System::Boolean Field_1_2; // 0x43
	::System::Int32 Field_1_8; // 0x44
	::System::Int32 Field_1_5; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_250 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_250, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_124_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
