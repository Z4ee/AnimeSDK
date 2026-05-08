#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_573.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x16833070)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x16832B20)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x16832F10)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x168331E0)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16832E10)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16832E20)
#define CLASS_1_5065FA890F0D9B8A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16833060)
#define CLASS_1_5065FA890F0D9B8A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16832B10)

inline static constexpr unsigned int Class_1_5065FA890F0D9B8A_1_TypeDefinitionIndex = 14066;

class Class_1_5065FA890F0D9B8A_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x10
	::System::String* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::Foundation::AssetPath Field_1_10; // 0x28
	::Struct_2_3E75877A2888D88A_573 Field_1_0; // 0x38
	::System::UInt64 Field_1_7; // 0x48
	::System::Int32 Field_1_5; // 0x50
	::System::Int32 Field_1_9; // 0x54
	::System::Byte Field_1_3; // 0x58
	::System::Byte Field_1_4; // 0x59
	::System::Boolean Field_1_2; // 0x5A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_573 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_573, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_1_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}
};
