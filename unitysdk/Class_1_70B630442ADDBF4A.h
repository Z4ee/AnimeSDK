#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_70B630442ADDBF4A_METHOD_1_6136C199368283F5_OFFSET UNITYSDK_OFFSET(0x19D48930)
#define CLASS_1_70B630442ADDBF4A__CTOR_OFFSET UNITYSDK_OFFSET(0x19D48BD0)

inline static constexpr unsigned int Class_1_70B630442ADDBF4A_TypeDefinitionIndex = 35714;

class Class_1_70B630442ADDBF4A : public ::System::Object
{
public:
	::System::Single NGMFBFBEJMA; // 0x10
	::System::Single KGNJBGHFPNO; // 0x14
	::System::Single DJEIMGGHMGM; // 0x18
	::System::Single PEDCEFMJCIM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70B630442ADDBF4A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_6136C199368283F5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70B630442ADDBF4A_METHOD_1_6136C199368283F5_OFFSET))(this);
	}
};
