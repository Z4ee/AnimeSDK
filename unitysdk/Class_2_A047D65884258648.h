#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
class Class_2_DDD10A023E74F941;
namespace RPG::GameCore { class MarblePredicateConfig; }

#define CLASS_2_A047D65884258648_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17EA4780)
#define CLASS_2_A047D65884258648_METHOD_2_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0x17EA47F0)
#define CLASS_2_A047D65884258648_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17EA48B0)
#define CLASS_2_A047D65884258648__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA46D0)

inline static constexpr unsigned int Class_2_A047D65884258648_TypeDefinitionIndex = 39008;

class Class_2_A047D65884258648 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::Class_2_DDD10A023E74F941* Field_2_2; // 0x18
	::RPG::GameCore::MarblePredicateConfig* Field_2_0; // 0x20
	::Class_2_DDD10A023E74F941* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::MarblePredicateConfig* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePredicateConfig*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A047D65884258648_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
