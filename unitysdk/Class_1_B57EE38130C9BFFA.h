#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_937;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B57EE38130C9BFFA_GET_ISENDVERTEX_OFFSET UNITYSDK_OFFSET(0x89365B0)
#define CLASS_1_B57EE38130C9BFFA_GET_PREDECESSORS_OFFSET UNITYSDK_OFFSET(0x89365D0)
#define CLASS_1_B57EE38130C9BFFA_SET_ISENDVERTEX_OFFSET UNITYSDK_OFFSET(0x89365C0)
#define CLASS_1_B57EE38130C9BFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x89365E0)

inline static constexpr unsigned int Class_1_B57EE38130C9BFFA_TypeDefinitionIndex = 61270;

class Class_1_B57EE38130C9BFFA : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* _IsEndVertex_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_937*>>* _Predecessors_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57EE38130C9BFFA__CTOR_OFFSET))(this);
	}

	::System::Func_2<::System::UInt32, ::System::Boolean>* get_IsEndVertex()
	{
		return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57EE38130C9BFFA_GET_ISENDVERTEX_OFFSET))(this);
	}

	::System::Void set_IsEndVertex(::System::Func_2<::System::UInt32, ::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_B57EE38130C9BFFA_SET_ISENDVERTEX_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_937*>>* get_Predecessors()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_937*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57EE38130C9BFFA_GET_PREDECESSORS_OFFSET))(this);
	}
};
