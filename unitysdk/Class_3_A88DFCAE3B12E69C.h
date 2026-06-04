#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

namespace System { class Object; }

#define CLASS_3_A88DFCAE3B12E69C__CTOR_OFFSET UNITYSDK_OFFSET(0x139AA3F0)

inline static constexpr unsigned int Class_3_A88DFCAE3B12E69C_TypeDefinitionIndex = 50782;

class Class_3_A88DFCAE3B12E69C : public ::RPG::GameCore::AIVariable
{
public:
	::System::Object* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A88DFCAE3B12E69C__CTOR_OFFSET))(this);
	}
};
