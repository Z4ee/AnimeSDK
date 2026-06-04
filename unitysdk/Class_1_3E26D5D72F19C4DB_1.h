#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C.h"
#include "unitysdk/System/Object.h"

class Class_1_27D7C9B1E553F802;
class Class_1_C85C4DAB350DD5FC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_1_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x14208F70)
#define CLASS_1_3E26D5D72F19C4DB_1_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0x14208F90)
#define CLASS_1_3E26D5D72F19C4DB_1_METHOD_1_DDD01EA0C1E2DD26_OFFSET UNITYSDK_OFFSET(0x14209130)
#define CLASS_1_3E26D5D72F19C4DB_1_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x14208F80)
#define CLASS_1_3E26D5D72F19C4DB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x142090B0)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_1_TypeDefinitionIndex = 58699;

class Class_1_3E26D5D72F19C4DB_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_276321B6B122C69C, ::Class_1_C85C4DAB350DD5FC*>* Field_1_0; // 0x10
	::Class_1_27D7C9B1E553F802* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_1__CTOR_OFFSET))(this);
	}

	::Class_1_27D7C9B1E553F802* get_Factory()
	{
		return ((::Class_1_27D7C9B1E553F802*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_1_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_27D7C9B1E553F802* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D7C9B1E553F802*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_1_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_C85C4DAB350DD5FC* Method_1_4D5BEDC75B4151A4(::Struct_2_276321B6B122C69C& a1)
	{
		return ((::Class_1_C85C4DAB350DD5FC*(*)(::PVOID, ::Struct_2_276321B6B122C69C&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_1_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}

	::Class_1_C85C4DAB350DD5FC* Method_1_DDD01EA0C1E2DD26(::Struct_2_276321B6B122C69C& a1)
	{
		return ((::Class_1_C85C4DAB350DD5FC*(*)(::PVOID, ::Struct_2_276321B6B122C69C&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_1_METHOD_1_DDD01EA0C1E2DD26_OFFSET))(this, a1);
	}
};
