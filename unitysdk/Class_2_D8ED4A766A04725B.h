#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleSetFinish; }

#define CLASS_2_D8ED4A766A04725B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18C5BB30)
#define CLASS_2_D8ED4A766A04725B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C5BBC0)
#define CLASS_2_D8ED4A766A04725B__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5BB20)

inline static constexpr unsigned int Class_2_D8ED4A766A04725B_TypeDefinitionIndex = 39730;

class Class_2_D8ED4A766A04725B : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleSetFinish* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetFinish*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_D8ED4A766A04725B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8ED4A766A04725B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8ED4A766A04725B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
