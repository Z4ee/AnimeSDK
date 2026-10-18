#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_70443244DF08F2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x154CFAD0)

inline static constexpr unsigned int Class_1_70443244DF08F2E0_TypeDefinitionIndex = 57724;

class Class_1_70443244DF08F2E0 : public ::System::Object
{
public:
	::System::Single KLPCBAHLDBA; // 0x10
	::System::Nullable_1<::RPG::MVector3> CJENCLECEHB; // 0x14
	::RPG::MVector3 KJHBKJPKBOP; // 0x24
	::RPG::MVector3 IGOFLKEBFLA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70443244DF08F2E0__CTOR_OFFSET))(this);
	}
};
