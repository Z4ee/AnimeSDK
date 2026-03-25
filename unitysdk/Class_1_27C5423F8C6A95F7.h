#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EDE247AF05B200CA.h"
#include "unitysdk/System/Object.h"

class Class_1_9A84770426095DA7;
class Class_1_F8D21125F3922568;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_27C5423F8C6A95F7_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBEE8D30)
#define CLASS_1_27C5423F8C6A95F7_METHOD_1_1B5EA57073D93292_OFFSET UNITYSDK_OFFSET(0xBEE8D50)
#define CLASS_1_27C5423F8C6A95F7_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBEE8D40)
#define CLASS_1_27C5423F8C6A95F7__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE8F20)

inline static constexpr unsigned int Class_1_27C5423F8C6A95F7_TypeDefinitionIndex = 50948;

class Class_1_27C5423F8C6A95F7 : public ::System::Object
{
public:
	::Class_1_9A84770426095DA7* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_EDE247AF05B200CA, ::Class_1_F8D21125F3922568*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7__CTOR_OFFSET))(this);
	}

	::Class_1_9A84770426095DA7* get_Factory()
	{
		return ((::Class_1_9A84770426095DA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_9A84770426095DA7* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A84770426095DA7*))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_F8D21125F3922568* Method_1_1B5EA57073D93292(::Struct_2_EDE247AF05B200CA& a1)
	{
		return ((::Class_1_F8D21125F3922568*(*)(::PVOID, ::Struct_2_EDE247AF05B200CA&))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_METHOD_1_1B5EA57073D93292_OFFSET))(this, a1);
	}
};
