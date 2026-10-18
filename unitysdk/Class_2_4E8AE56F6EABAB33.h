#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class PetMarbleSpecialTalk; }

#define CLASS_2_4E8AE56F6EABAB33_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1C9CAC30)
#define CLASS_2_4E8AE56F6EABAB33__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CAC20)

inline static constexpr unsigned int Class_2_4E8AE56F6EABAB33_TypeDefinitionIndex = 43106;

class Class_2_4E8AE56F6EABAB33 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::PetMarbleSpecialTalk* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::PetMarbleSpecialTalk* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleSpecialTalk*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_4E8AE56F6EABAB33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E8AE56F6EABAB33_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}
};
