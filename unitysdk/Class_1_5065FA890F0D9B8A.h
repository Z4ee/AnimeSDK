#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_107.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5065FA890F0D9B8A_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x1C242240)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1C2424F0)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1C242640)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x1C2423A0)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C242630)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C242930)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C242230)
#define CLASS_1_5065FA890F0D9B8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C242220)

inline static constexpr unsigned int Class_1_5065FA890F0D9B8A_TypeDefinitionIndex = 16428;

class Class_1_5065FA890F0D9B8A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x10
	::System::String* Field_1_11; // 0x18
	::Foundation::AssetPath Field_1_15; // 0x20
	::Struct_2_3E75877A2888D88A_107 Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x40
	::System::UInt64 Field_1_10; // 0x48
	::System::Int32 Field_1_8; // 0x50
	::System::Int32 Field_1_4; // 0x54
	::System::Byte Field_1_5; // 0x58
	::System::Byte Field_1_6; // 0x59
	::System::Boolean Field_1_7; // 0x5A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_107 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_107, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
