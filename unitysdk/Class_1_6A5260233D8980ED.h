#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_8.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_579.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A5260233D8980ED_METHOD_1_1405FD653CC39C65_OFFSET UNITYSDK_OFFSET(0x1401EDB0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_31B03235195D095F_1_OFFSET UNITYSDK_OFFSET(0x1401F520)
#define CLASS_1_6A5260233D8980ED_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1401F220)
#define CLASS_1_6A5260233D8980ED_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1401F0D0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1401F0C0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1401EFD0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1401F510)
#define CLASS_1_6A5260233D8980ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1401EDA0)

inline static constexpr unsigned int Class_1_6A5260233D8980ED_TypeDefinitionIndex = 17054;

class Class_1_6A5260233D8980ED : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_579 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_8> Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x48
	::System::Boolean Field_1_2; // 0x50
	::System::Byte Field_1_4; // 0x51
	::System::Byte Field_1_3; // 0x52
	::System::Int32 Field_1_5; // 0x54

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_579 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_579, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_3659D99D9E0DCBB9_8 Method_1_1405FD653CC39C65()
	{
		return ((::Struct_2_3659D99D9E0DCBB9_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_1405FD653CC39C65_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_31B03235195D095F_1_OFFSET))(this);
	}
};
