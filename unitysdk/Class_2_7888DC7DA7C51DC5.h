#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/Class_1_8377BAB19A574A40_Enum_3_EA9ED4C97D5F555C.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_A663CB151B76EB67;
class Class_3_A663CB151B76EB67_Class_1_B39C476F3023E577;
class Class_3_F33F9DC5F4112336;
namespace UnityEngine { class Transform; }

#define CLASS_2_7888DC7DA7C51DC5_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x14C91030)
#define CLASS_2_7888DC7DA7C51DC5_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x14C91190)
#define CLASS_2_7888DC7DA7C51DC5__CTOR_OFFSET UNITYSDK_OFFSET(0x14C91120)

inline static constexpr unsigned int Class_2_7888DC7DA7C51DC5_TypeDefinitionIndex = 45179;

class Class_2_7888DC7DA7C51DC5 : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_A663CB151B76EB67* Field_2_10; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::Class_3_F33F9DC5F4112336* Field_2_9; // 0x90
	::Class_3_A663CB151B76EB67_Class_1_B39C476F3023E577* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_6; // 0xA0
	::System::Boolean Field_2_7; // 0xA8
	::System::Boolean Field_2_11; // 0xA9
	::System::Boolean Field_2_0; // 0xAA
	::Class_1_8377BAB19A574A40_Enum_3_EA9ED4C97D5F555C Field_2_1; // 0xAB
	::UnityEngine::Vector3 Field_2_4; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7888DC7DA7C51DC5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7888DC7DA7C51DC5_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7888DC7DA7C51DC5_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
