#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleRandomRevive; }

#define CLASS_2_208E75987E2103DE_METHOD_2_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x1C9C7EA0)
#define CLASS_2_208E75987E2103DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C7E90)

inline static constexpr unsigned int Class_2_208E75987E2103DE_TypeDefinitionIndex = 43120;

class Class_2_208E75987E2103DE : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRandomRevive* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRandomRevive* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRandomRevive*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_97285E397E8F5091_OFFSET))(this);
	}
};
