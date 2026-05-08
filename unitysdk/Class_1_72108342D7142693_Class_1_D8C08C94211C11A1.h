#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_72108342D7142693_Class_2_B57A8ED4EE569CA0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72108342D7142693_CLASS_1_D8C08C94211C11A1_METHOD_1_A423351FCD68E65E_OFFSET UNITYSDK_OFFSET(0xDED6070)
#define CLASS_1_72108342D7142693_CLASS_1_D8C08C94211C11A1__CTOR_OFFSET UNITYSDK_OFFSET(0xDED6060)

inline static constexpr unsigned int Class_1_72108342D7142693_Class_1_D8C08C94211C11A1_TypeDefinitionIndex = 67323;

class Class_1_72108342D7142693_Class_1_D8C08C94211C11A1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_72108342D7142693_Class_2_B57A8ED4EE569CA0* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72108342D7142693_CLASS_1_D8C08C94211C11A1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_A423351FCD68E65E()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72108342D7142693_CLASS_1_D8C08C94211C11A1_METHOD_1_A423351FCD68E65E_OFFSET))(this);
	}
};
