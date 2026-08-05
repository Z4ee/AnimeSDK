#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_13.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_256.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A5260233D8980ED_METHOD_1_1405FD653CC39C65_OFFSET UNITYSDK_OFFSET(0x17F725A0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x17F72460)
#define CLASS_1_6A5260233D8980ED_METHOD_1_75D0422F760341EE_1_OFFSET UNITYSDK_OFFSET(0x17F727C0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x17F72150)
#define CLASS_1_6A5260233D8980ED_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F72450)
#define CLASS_1_6A5260233D8980ED_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17F72AB0)
#define CLASS_1_6A5260233D8980ED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F72440)
#define CLASS_1_6A5260233D8980ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17F72140)

inline static constexpr unsigned int Class_1_6A5260233D8980ED_TypeDefinitionIndex = 11750;

class Class_1_6A5260233D8980ED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x20
	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_13> Field_1_11; // 0x28
	::Struct_2_3E75877A2888D88A_256 Field_1_1; // 0x40
	::System::Boolean Field_1_7; // 0x50
	::System::Byte Field_1_6; // 0x51
	::System::Byte Field_1_5; // 0x52
	::System::Int32 Field_1_4; // 0x54

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_256 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_256, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::Struct_2_3659D99D9E0DCBB9_13 Method_1_1405FD653CC39C65()
	{
		return ((::Struct_2_3659D99D9E0DCBB9_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_1405FD653CC39C65_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_75D0422F760341EE_1_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A5260233D8980ED_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
