#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AA6FF9C9B64B58C9__CTOR_OFFSET UNITYSDK_OFFSET(0x19171EC0)

inline static constexpr unsigned int Class_1_AA6FF9C9B64B58C9_TypeDefinitionIndex = 78054;

class Class_1_AA6FF9C9B64B58C9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* IKHMDAAIGOF; // 0x10
	::System::Single HMBJNEIEIJK; // 0x18
	::System::Single PMHMEGEJDGP; // 0x1C
	::System::Single PJGLBPCJFEK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6FF9C9B64B58C9__CTOR_OFFSET))(this);
	}
};
