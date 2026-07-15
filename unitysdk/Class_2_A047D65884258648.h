#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
class Class_2_C956F0B1EE8CC3B3;
namespace RPG::GameCore { class MarblePredicateConfig; }

#define CLASS_2_A047D65884258648_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x180C98C0)
#define CLASS_2_A047D65884258648_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x180C9980)
#define CLASS_2_A047D65884258648_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180C99F0)
#define CLASS_2_A047D65884258648__CTOR_OFFSET UNITYSDK_OFFSET(0x180C4510)

inline static constexpr unsigned int Class_2_A047D65884258648_TypeDefinitionIndex = 40585;

class Class_2_A047D65884258648 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::Class_2_C956F0B1EE8CC3B3* Field_2_0; // 0x18
	::RPG::GameCore::MarblePredicateConfig* Field_2_1; // 0x20
	::Class_2_C956F0B1EE8CC3B3* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::MarblePredicateConfig* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePredicateConfig*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
