#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleSwallow; }

#define CLASS_2_D5B46C5909D3FB52_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x18C2F350)
#define CLASS_2_D5B46C5909D3FB52_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C2F410)
#define CLASS_2_D5B46C5909D3FB52__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1E9B0)

inline static constexpr unsigned int Class_2_D5B46C5909D3FB52_TypeDefinitionIndex = 39740;

class Class_2_D5B46C5909D3FB52 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSwallow* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSwallow* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSwallow*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_D5B46C5909D3FB52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5B46C5909D3FB52_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5B46C5909D3FB52_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
