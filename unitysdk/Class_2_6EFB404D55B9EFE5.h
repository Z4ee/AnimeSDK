#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleTriggerEffect; }

#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x1C4B5770)
#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C4B5880)
#define CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B5760)

inline static constexpr unsigned int Class_2_6EFB404D55B9EFE5_TypeDefinitionIndex = 41474;

class Class_2_6EFB404D55B9EFE5 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleTriggerEffect* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleTriggerEffect* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTriggerEffect*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET))(this, a1, a2);
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
