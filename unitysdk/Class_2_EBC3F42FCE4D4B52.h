#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class PetMarbleSetFaceEmotion; }

#define CLASS_2_EBC3F42FCE4D4B52_METHOD_2_FF0E709C2B9D8A2E_OFFSET UNITYSDK_OFFSET(0x1C909990)
#define CLASS_2_EBC3F42FCE4D4B52__CTOR_OFFSET UNITYSDK_OFFSET(0x1C909980)

inline static constexpr unsigned int Class_2_EBC3F42FCE4D4B52_TypeDefinitionIndex = 43103;

class Class_2_EBC3F42FCE4D4B52 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::PetMarbleSetFaceEmotion* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::PetMarbleSetFaceEmotion* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleSetFaceEmotion*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_EBC3F42FCE4D4B52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FF0E709C2B9D8A2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC3F42FCE4D4B52_METHOD_2_FF0E709C2B9D8A2E_OFFSET))(this);
	}
};
