#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_349BE0BAA6D56377_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x18470260)
#define CLASS_1_349BE0BAA6D56377__CTOR_OFFSET UNITYSDK_OFFSET(0x184703D0)

inline static constexpr unsigned int Class_1_349BE0BAA6D56377_TypeDefinitionIndex = 14192;

class Class_1_349BE0BAA6D56377 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::GameCore::RogueTournMode Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349BE0BAA6D56377__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_349BE0BAA6D56377*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_349BE0BAA6D56377*&))((::PBYTE)hIl2Cpp + CLASS_1_349BE0BAA6D56377_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
