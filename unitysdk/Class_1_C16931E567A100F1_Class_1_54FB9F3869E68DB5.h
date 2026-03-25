#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_CLASS_1_54FB9F3869E68DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x166AF120)

inline static constexpr unsigned int Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5_TypeDefinitionIndex = 28513;

class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_CLASS_1_54FB9F3869E68DB5__CTOR_OFFSET))(this);
	}
};
