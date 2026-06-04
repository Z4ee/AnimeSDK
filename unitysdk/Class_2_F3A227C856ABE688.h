#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleRemoveBuff; }

#define CLASS_2_F3A227C856ABE688_METHOD_2_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0x18C0DDC0)
#define CLASS_2_F3A227C856ABE688_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C0E440)
#define CLASS_2_F3A227C856ABE688__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0DDB0)

inline static constexpr unsigned int Class_2_F3A227C856ABE688_TypeDefinitionIndex = 39724;

class Class_2_F3A227C856ABE688 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRemoveBuff* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRemoveBuff* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRemoveBuff*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_F3A227C856ABE688__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_56E076CBC69B0772()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A227C856ABE688_METHOD_2_56E076CBC69B0772_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A227C856ABE688_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
