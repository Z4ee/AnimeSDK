#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8F914EAE076F970E__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBD990)

inline static constexpr unsigned int Class_1_8F914EAE076F970E_TypeDefinitionIndex = 53404;

class Class_1_8F914EAE076F970E : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F914EAE076F970E__CTOR_OFFSET))(this);
	}
};
