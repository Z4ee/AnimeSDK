#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/System/Object.h"

class Class_1_AE30349E456D5B05;
class Class_1_C85C4DAB350DD5FC_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_2_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA8811B0)
#define CLASS_1_3E26D5D72F19C4DB_2_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0xA8811D0)
#define CLASS_1_3E26D5D72F19C4DB_2_METHOD_1_DDD01EA0C1E2DD26_OFFSET UNITYSDK_OFFSET(0xA881370)
#define CLASS_1_3E26D5D72F19C4DB_2_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA8811C0)
#define CLASS_1_3E26D5D72F19C4DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8812F0)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_2_TypeDefinitionIndex = 58694;

class Class_1_3E26D5D72F19C4DB_2 : public ::System::Object
{
public:
	::Class_1_AE30349E456D5B05* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_276321B6B122C69C_1, ::Class_1_C85C4DAB350DD5FC_1*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_2__CTOR_OFFSET))(this);
	}

	::Class_1_AE30349E456D5B05* get_Factory()
	{
		return ((::Class_1_AE30349E456D5B05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_2_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_AE30349E456D5B05* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE30349E456D5B05*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_2_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_C85C4DAB350DD5FC_1* Method_1_4D5BEDC75B4151A4(::Struct_2_276321B6B122C69C_1& a1)
	{
		return ((::Class_1_C85C4DAB350DD5FC_1*(*)(::PVOID, ::Struct_2_276321B6B122C69C_1&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_2_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}

	::Class_1_C85C4DAB350DD5FC_1* Method_1_DDD01EA0C1E2DD26(::Struct_2_276321B6B122C69C_1& a1)
	{
		return ((::Class_1_C85C4DAB350DD5FC_1*(*)(::PVOID, ::Struct_2_276321B6B122C69C_1&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_2_METHOD_1_DDD01EA0C1E2DD26_OFFSET))(this, a1);
	}
};
