#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleBuffText; }

#define CLASS_2_482AB6EE31578097_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x1C4FCD30)
#define CLASS_2_482AB6EE31578097_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C4FCE40)
#define CLASS_2_482AB6EE31578097__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FCD20)

inline static constexpr unsigned int Class_2_482AB6EE31578097_TypeDefinitionIndex = 41475;

class Class_2_482AB6EE31578097 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleBuffText* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleBuffText* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBuffText*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_482AB6EE31578097__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_482AB6EE31578097_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_482AB6EE31578097_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
