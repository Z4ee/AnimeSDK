#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EA973170E0B2CCF6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_1_CLASS_1_91972DE1CB1975F3__CTOR_OFFSET UNITYSDK_OFFSET(0x165D0C40)

inline static constexpr unsigned int Class_3_61A5922E5046F385_1_Class_1_91972DE1CB1975F3_TypeDefinitionIndex = 43366;

class Class_3_61A5922E5046F385_1_Class_1_91972DE1CB1975F3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_EA973170E0B2CCF6*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_1_CLASS_1_91972DE1CB1975F3__CTOR_OFFSET))(this);
	}
};
