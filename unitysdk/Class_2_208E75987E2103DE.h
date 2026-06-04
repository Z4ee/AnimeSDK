#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleRandomRevive; }

#define CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x18CC9D30)
#define CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18CC9E40)
#define CLASS_2_208E75987E2103DE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC9D20)

inline static constexpr unsigned int Class_2_208E75987E2103DE_TypeDefinitionIndex = 39739;

class Class_2_208E75987E2103DE : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRandomRevive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRandomRevive* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRandomRevive*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
