#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DE1F9F8297133D40.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Sprint; }

#define CLASS_3_AE228900868A1825_METHOD_3_00B782B71166DD38_OFFSET UNITYSDK_OFFSET(0x18BD1810)
#define CLASS_3_AE228900868A1825_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x18BD15B0)
#define CLASS_3_AE228900868A1825__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD1890)

inline static constexpr unsigned int Class_3_AE228900868A1825_TypeDefinitionIndex = 74080;

class Class_3_AE228900868A1825 : public ::Class_2_DE1F9F8297133D40
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE228900868A1825__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE228900868A1825_METHOD_3_921C3C3E09D59CD4_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourSkillConfig_Sprint* Method_3_00B782B71166DD38()
	{
		return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Sprint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE228900868A1825_METHOD_3_00B782B71166DD38_OFFSET))(this);
	}
};
