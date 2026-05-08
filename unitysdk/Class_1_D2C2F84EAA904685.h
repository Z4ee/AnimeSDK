#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D2C2F84EAA904685__CTOR_OFFSET UNITYSDK_OFFSET(0x1145CEA0)

inline static constexpr unsigned int Class_1_D2C2F84EAA904685_TypeDefinitionIndex = 48382;

class Class_1_D2C2F84EAA904685 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2C2F84EAA904685__CTOR_OFFSET))(this);
	}
};
