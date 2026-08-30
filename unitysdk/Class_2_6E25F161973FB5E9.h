#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Common/StateMachine_1.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define CLASS_2_6E25F161973FB5E9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x161399A0)
#define CLASS_2_6E25F161973FB5E9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16139960)
#define CLASS_2_6E25F161973FB5E9__CTOR_OFFSET UNITYSDK_OFFSET(0x16139940)

inline static constexpr unsigned int Class_2_6E25F161973FB5E9_TypeDefinitionIndex = 61408;

class Class_2_6E25F161973FB5E9 : public ::RPG::Common::StateMachine_1<::RPG::Client::MonoJoyStickProvider*>
{
public:
	::System::Void _ctor(::RPG::Client::MonoJoyStickProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + CLASS_2_6E25F161973FB5E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E25F161973FB5E9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E25F161973FB5E9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
