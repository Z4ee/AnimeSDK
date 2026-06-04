#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_7.h"
#include "unitysdk/System/Object.h"

class Class_1_6869ECCA5B46F302_1;
class Class_1_A3A2B28DB41BA84A_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41D140539C030FAC_4_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA40FA00)
#define CLASS_1_41D140539C030FAC_4_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0xA40FA20)
#define CLASS_1_41D140539C030FAC_4_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA40FA10)
#define CLASS_1_41D140539C030FAC_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA40FB70)

inline static constexpr unsigned int Class_1_41D140539C030FAC_4_TypeDefinitionIndex = 58697;

class Class_1_41D140539C030FAC_4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_7, ::Class_1_A3A2B28DB41BA84A_1*>* Field_1_0; // 0x10
	::Class_1_6869ECCA5B46F302_1* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_4__CTOR_OFFSET))(this);
	}

	::Class_1_6869ECCA5B46F302_1* get_Factory()
	{
		return ((::Class_1_6869ECCA5B46F302_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_4_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_6869ECCA5B46F302_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_1*))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_4_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_A3A2B28DB41BA84A_1* Method_1_1627AE6BCDE89B9B(::Struct_2_019938BC9C50B169_7& a1)
	{
		return ((::Class_1_A3A2B28DB41BA84A_1*(*)(::PVOID, ::Struct_2_019938BC9C50B169_7&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_4_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}
};
