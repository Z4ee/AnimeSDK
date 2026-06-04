#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleTriggerEffect; }

#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x18CF7BB0)
#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18CF7CC0)
#define CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF7BA0)

inline static constexpr unsigned int Class_2_6EFB404D55B9EFE5_TypeDefinitionIndex = 39727;

class Class_2_6EFB404D55B9EFE5 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleTriggerEffect* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleTriggerEffect* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTriggerEffect*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EFB404D55B9EFE5_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EFB404D55B9EFE5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
