#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1104;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89E79B5533E358DA_GET_ISENDVERTEX_OFFSET UNITYSDK_OFFSET(0xA69AF20)
#define CLASS_1_89E79B5533E358DA_GET_PREDECESSORS_OFFSET UNITYSDK_OFFSET(0xA69AF40)
#define CLASS_1_89E79B5533E358DA_SET_ISENDVERTEX_OFFSET UNITYSDK_OFFSET(0xA69AF30)
#define CLASS_1_89E79B5533E358DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA69AF50)

inline static constexpr unsigned int Class_1_89E79B5533E358DA_TypeDefinitionIndex = 69590;

class Class_1_89E79B5533E358DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_1104*>>* _Predecessors_k__BackingField; // 0x10
	::System::Func_2<::System::UInt32, ::System::Boolean>* _IsEndVertex_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89E79B5533E358DA__CTOR_OFFSET))(this);
	}

	::System::Func_2<::System::UInt32, ::System::Boolean>* get_IsEndVertex()
	{
		return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89E79B5533E358DA_GET_ISENDVERTEX_OFFSET))(this);
	}

	::System::Void set_IsEndVertex(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_89E79B5533E358DA_SET_ISENDVERTEX_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_1104*>>* get_Predecessors()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::Class_0_16E4307DCC419505_1104*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89E79B5533E358DA_GET_PREDECESSORS_OFFSET))(this);
	}
};
