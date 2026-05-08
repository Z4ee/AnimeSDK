#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB8EF55D06D0D845.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_868.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_636EE78ABFB0947F_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x166D3150)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x166D2F00)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x166D3140)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x166D3050)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x166D2DB0)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x166D2DA0)
#define CLASS_1_636EE78ABFB0947F__CTOR_OFFSET UNITYSDK_OFFSET(0x166D2D90)

inline static constexpr unsigned int Class_1_636EE78ABFB0947F_TypeDefinitionIndex = 17928;

class Class_1_636EE78ABFB0947F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x18
	::Struct_2_3E75877A2888D88A_868 Field_1_0; // 0x20
	::System::Int32 Field_1_5; // 0x30
	::Enum_3_AB8EF55D06D0D845 Field_1_6; // 0x34
	::System::Byte Field_1_4; // 0x38
	::System::Boolean Field_1_2; // 0x39
	::System::Byte Field_1_3; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_868 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_868, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_AB8EF55D06D0D845 Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_AB8EF55D06D0D845(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_31B03235195D095F_OFFSET))(this);
	}
};
