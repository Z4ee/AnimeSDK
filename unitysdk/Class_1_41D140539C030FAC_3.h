#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_4.h"
#include "unitysdk/System/Object.h"

class Class_1_35B5591E4067D7D2;
class Class_1_6869ECCA5B46F302;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41D140539C030FAC_3_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x18EFC060)
#define CLASS_1_41D140539C030FAC_3_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0x18EFC080)
#define CLASS_1_41D140539C030FAC_3_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x18EFC070)
#define CLASS_1_41D140539C030FAC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFC1D0)

inline static constexpr unsigned int Class_1_41D140539C030FAC_3_TypeDefinitionIndex = 59960;

class Class_1_41D140539C030FAC_3 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_D645B4E0B73852B6_4, ::Class_1_35B5591E4067D7D2*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_3__CTOR_OFFSET))(this);
	}

	::Class_1_6869ECCA5B46F302* get_Factory()
	{
		return ((::Class_1_6869ECCA5B46F302*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_3_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_6869ECCA5B46F302* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302*))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_3_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_35B5591E4067D7D2* Method_1_1627AE6BCDE89B9B(::Struct_2_D645B4E0B73852B6_4& a1)
	{
		return ((::Class_1_35B5591E4067D7D2*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_4&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_3_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}
};
