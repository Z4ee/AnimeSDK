#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_621BFCA8F4CDD0A1_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x10C4D860)
#define CLASS_1_621BFCA8F4CDD0A1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C4D8B0)

inline static constexpr unsigned int Class_1_621BFCA8F4CDD0A1_TypeDefinitionIndex = 63358;

class Class_1_621BFCA8F4CDD0A1 : public ::System::Object
{
public:
	::System::Int32 Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x14
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621BFCA8F4CDD0A1__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621BFCA8F4CDD0A1_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
