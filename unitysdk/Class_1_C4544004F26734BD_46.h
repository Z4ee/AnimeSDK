#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_617.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_46_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x11DF5A60)
#define CLASS_1_C4544004F26734BD_46_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11DF5D50)
#define CLASS_1_C4544004F26734BD_46_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11DF5960)
#define CLASS_1_C4544004F26734BD_46_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11DF5A50)
#define CLASS_1_C4544004F26734BD_46__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF5950)

inline static constexpr unsigned int Class_1_C4544004F26734BD_46_TypeDefinitionIndex = 15562;

class Class_1_C4544004F26734BD_46 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x18
	::Struct_2_3E75877A2888D88A_617 Field_1_0; // 0x20
	::System::Byte Field_1_4; // 0x30
	::System::Byte Field_1_5; // 0x31
	::System::Boolean Field_1_6; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_617 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_617, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_46_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_46_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_46_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_46_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
