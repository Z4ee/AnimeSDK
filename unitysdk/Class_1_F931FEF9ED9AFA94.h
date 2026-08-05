#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F931FEF9ED9AFA94__CTOR_OFFSET UNITYSDK_OFFSET(0x13E68190)

inline static constexpr unsigned int Class_1_F931FEF9ED9AFA94_TypeDefinitionIndex = 84385;

class Class_1_F931FEF9ED9AFA94 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Single Field_1_7; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::Enum_3_01618AD0437C8486 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F931FEF9ED9AFA94__CTOR_OFFSET))(this);
	}
};
