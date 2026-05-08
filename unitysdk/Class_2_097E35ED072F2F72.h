#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AF00976E6903061.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_097E35ED072F2F72__CTOR_OFFSET UNITYSDK_OFFSET(0xE91F970)

inline static constexpr unsigned int Class_2_097E35ED072F2F72_TypeDefinitionIndex = 50819;

class Class_2_097E35ED072F2F72 : public ::Class_1_0AF00976E6903061
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x48
	::System::Single Field_2_1; // 0x50
	::System::Boolean Field_2_2; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_097E35ED072F2F72__CTOR_OFFSET))(this);
	}
};
