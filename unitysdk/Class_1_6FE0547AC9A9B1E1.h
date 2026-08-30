#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6FE0547AC9A9B1E1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C148020)
#define CLASS_1_6FE0547AC9A9B1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C148080)

inline static constexpr unsigned int Class_1_6FE0547AC9A9B1E1_TypeDefinitionIndex = 41835;

class Class_1_6FE0547AC9A9B1E1 : public ::System::Object
{
public:
	::System::String* PJNDKCMPMAO; // 0x10
	::System::Int32 MNMHMECGDAK; // 0x18
	::System::Boolean ALFACIGNFJB; // 0x1C
	::System::Boolean EDCNKGHPHFC; // 0x1D
	::System::Single PGCBHJLPHIF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FE0547AC9A9B1E1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FE0547AC9A9B1E1_CLEAR_OFFSET))(this);
	}
};
