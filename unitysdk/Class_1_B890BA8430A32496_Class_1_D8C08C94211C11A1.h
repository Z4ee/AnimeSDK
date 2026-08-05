#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B890BA8430A32496_CLASS_1_D8C08C94211C11A1_METHOD_1_A423351FCD68E65E_OFFSET UNITYSDK_OFFSET(0x18DE9A30)
#define CLASS_1_B890BA8430A32496_CLASS_1_D8C08C94211C11A1__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE9A20)

inline static constexpr unsigned int Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1_TypeDefinitionIndex = 50314;

class Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1 : public ::System::Object
{
public:
	::Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B890BA8430A32496_CLASS_1_D8C08C94211C11A1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_A423351FCD68E65E()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B890BA8430A32496_CLASS_1_D8C08C94211C11A1_METHOD_1_A423351FCD68E65E_OFFSET))(this);
	}
};
