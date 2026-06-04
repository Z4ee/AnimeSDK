#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleBuffText; }

#define CLASS_2_482AB6EE31578097_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x18D3EB60)
#define CLASS_2_482AB6EE31578097_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D3EC70)
#define CLASS_2_482AB6EE31578097__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3EB50)

inline static constexpr unsigned int Class_2_482AB6EE31578097_TypeDefinitionIndex = 39728;

class Class_2_482AB6EE31578097 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleBuffText* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleBuffText* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBuffText*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_482AB6EE31578097__CTOR_OFFSET))(this, a1, a2);
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
