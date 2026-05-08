#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_136.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_872037CA3D9BDC34_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1A137F00)
#define CLASS_1_872037CA3D9BDC34_METHOD_1_6882A71DB631AF06_OFFSET UNITYSDK_OFFSET(0x1A137AB0)
#define CLASS_1_872037CA3D9BDC34_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A137AA0)
#define CLASS_1_872037CA3D9BDC34_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A138050)
#define CLASS_1_872037CA3D9BDC34_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A138140)
#define CLASS_1_872037CA3D9BDC34_METHOD_1_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0x1A137DA0)
#define CLASS_1_872037CA3D9BDC34__CTOR_OFFSET UNITYSDK_OFFSET(0x1A137A90)

inline static constexpr unsigned int Class_1_872037CA3D9BDC34_TypeDefinitionIndex = 10939;

class Class_1_872037CA3D9BDC34 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Struct_2_58DF5669875F2C66_136 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_1_7; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Boolean Field_1_2; // 0x3C
	::System::Byte Field_1_3; // 0x3D
	::System::Byte Field_1_4; // 0x3E
	::System::Single Field_1_8; // 0x40

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_136 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_136, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Single>* Method_1_6882A71DB631AF06()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_6882A71DB631AF06_OFFSET))(this);
	}

	::System::Single Method_1_F7AB163354E6802C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_F7AB163354E6802C_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872037CA3D9BDC34_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
