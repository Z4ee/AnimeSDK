#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B229BC73065D28E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA97860)

inline static constexpr unsigned int Class_1_B229BC73065D28E3_TypeDefinitionIndex = 41927;

class Class_1_B229BC73065D28E3 : public ::System::Object
{
public:
	::System::String* HDCDMCBPLKI; // 0x10
	::System::Single CGDLDCHFALO; // 0x18
	::System::Single ACKCNOPIKIM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B229BC73065D28E3__CTOR_OFFSET))(this);
	}
};
