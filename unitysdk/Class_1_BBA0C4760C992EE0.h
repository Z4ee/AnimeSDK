#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BD22AE0CEC58741C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BBA0C4760C992EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x11EAA8E0)

inline static constexpr unsigned int Class_1_BBA0C4760C992EE0_TypeDefinitionIndex = 61501;

class Class_1_BBA0C4760C992EE0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::Enum_3_BD22AE0CEC58741C Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBA0C4760C992EE0__CTOR_OFFSET))(this);
	}
};
