#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_13128E6E9D03EE8C.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
class Class_0_16E4307DCC419505_93;
class Class_1_64FA72CEAB1AF5ED;
class Class_1_91114DA5C6FB0192;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CBE724F612D684F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C2840D0)
#define CLASS_1_6CBE724F612D684F_METHOD_1_38DFB57FCF5EC65E_OFFSET UNITYSDK_OFFSET(0x1C283E10)
#define CLASS_1_6CBE724F612D684F_METHOD_1_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x1C284170)
#define CLASS_1_6CBE724F612D684F_METHOD_1_ED57B84DE5AC3869_OFFSET UNITYSDK_OFFSET(0x1C284480)
#define CLASS_1_6CBE724F612D684F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C283D80)

inline static constexpr unsigned int Class_1_6CBE724F612D684F_TypeDefinitionIndex = 88012;

class Class_1_6CBE724F612D684F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_93*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CBE724F612D684F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_38DFB57FCF5EC65E(::System::Int32 a1, ::Struct_2_13128E6E9D03EE8C a2, ::Class_1_64FA72CEAB1AF5ED* a3, ::Class_1_91114DA5C6FB0192* a4, ::Class_0_16E4307DCC419505_91* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_13128E6E9D03EE8C, ::Class_1_64FA72CEAB1AF5ED*, ::Class_1_91114DA5C6FB0192*, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_6CBE724F612D684F_METHOD_1_38DFB57FCF5EC65E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CBE724F612D684F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_B4919B17B855CC79(::Class_0_16E4307DCC419505_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_93*))((::PBYTE)hIl2Cpp + CLASS_1_6CBE724F612D684F_METHOD_1_B4919B17B855CC79_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED57B84DE5AC3869(::System::Int32 a1, ::Struct_2_13128E6E9D03EE8C a2, ::Class_1_64FA72CEAB1AF5ED* a3, ::Class_1_91114DA5C6FB0192* a4, ::Class_0_16E4307DCC419505_91* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_13128E6E9D03EE8C, ::Class_1_64FA72CEAB1AF5ED*, ::Class_1_91114DA5C6FB0192*, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_6CBE724F612D684F_METHOD_1_ED57B84DE5AC3869_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
