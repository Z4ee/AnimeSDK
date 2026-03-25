#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleTriggerEffect; }

#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x16864390)
#define CLASS_2_6EFB404D55B9EFE5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168644A0)
#define CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET UNITYSDK_OFFSET(0x16864380)

inline static constexpr unsigned int Class_2_6EFB404D55B9EFE5_TypeDefinitionIndex = 33169;

class Class_2_6EFB404D55B9EFE5 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleTriggerEffect* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleTriggerEffect* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTriggerEffect*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_6EFB404D55B9EFE5__CTOR_OFFSET))(this, a1, a2);
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
