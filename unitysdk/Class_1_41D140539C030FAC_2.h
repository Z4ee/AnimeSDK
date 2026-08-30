#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1E2BCC44350175D1;
class Class_1_9A84770426095DA7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41D140539C030FAC_2_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xC147A10)
#define CLASS_1_41D140539C030FAC_2_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0xC147A30)
#define CLASS_1_41D140539C030FAC_2_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xC147A20)
#define CLASS_1_41D140539C030FAC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC147BB0)

inline static constexpr unsigned int Class_1_41D140539C030FAC_2_TypeDefinitionIndex = 62773;

class Class_1_41D140539C030FAC_2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_F1C4ECC5EFDCA1EF_1, ::Class_1_1E2BCC44350175D1*>* IALLAPIBJJL; // 0x10
	::Class_1_9A84770426095DA7* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_2__CTOR_OFFSET))(this);
	}

	::Class_1_9A84770426095DA7* get_Factory()
	{
		return ((::Class_1_9A84770426095DA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_2_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_9A84770426095DA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A84770426095DA7*))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_2_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_1E2BCC44350175D1* Method_1_1627AE6BCDE89B9B(::Struct_2_F1C4ECC5EFDCA1EF_1& a1)
	{
		return ((::Class_1_1E2BCC44350175D1*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_1&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_2_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}
};
