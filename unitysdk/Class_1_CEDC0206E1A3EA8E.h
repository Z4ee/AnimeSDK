#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_139;
class Class_1_C6F7CE919BB430CF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CEDC0206E1A3EA8E__CTOR_OFFSET UNITYSDK_OFFSET(0xA552280)

inline static constexpr unsigned int Class_1_CEDC0206E1A3EA8E_TypeDefinitionIndex = 58159;

class Class_1_CEDC0206E1A3EA8E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_139*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C6F7CE919BB430CF*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEDC0206E1A3EA8E__CTOR_OFFSET))(this);
	}
};
