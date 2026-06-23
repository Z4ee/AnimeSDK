#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB8EF55D06D0D845.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_50.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_636EE78ABFB0947F_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x14008760)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x14008610)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14008510)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14008520)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x14008A50)
#define CLASS_1_636EE78ABFB0947F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14008500)
#define CLASS_1_636EE78ABFB0947F__CTOR_OFFSET UNITYSDK_OFFSET(0x140084F0)

inline static constexpr unsigned int Class_1_636EE78ABFB0947F_TypeDefinitionIndex = 17604;

class Class_1_636EE78ABFB0947F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::Struct_2_3E75877A2888D88A_50 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::Enum_3_AB8EF55D06D0D845 Field_1_6; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_3; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_50 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_50, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::Enum_3_AB8EF55D06D0D845 Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_AB8EF55D06D0D845(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_636EE78ABFB0947F_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}
};
