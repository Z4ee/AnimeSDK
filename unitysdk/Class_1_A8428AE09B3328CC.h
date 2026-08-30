#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_8.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaStyle; }

#define CLASS_1_A8428AE09B3328CC_METHOD_1_AD6AB5B6B6D7ED69_OFFSET UNITYSDK_OFFSET(0xF40B600)
#define CLASS_1_A8428AE09B3328CC_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0xF40B570)
#define CLASS_1_A8428AE09B3328CC__CTOR_OFFSET UNITYSDK_OFFSET(0xF40B560)

inline static constexpr unsigned int Class_1_A8428AE09B3328CC_TypeDefinitionIndex = 67255;

class Class_1_A8428AE09B3328CC : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStyle* LIGEJDMLPEP; // 0x10
	::Struct_2_FD0368737CBF6F9B_8 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_8))((::PBYTE)hIl2Cpp + CLASS_1_A8428AE09B3328CC__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8428AE09B3328CC_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaStyle* Method_1_AD6AB5B6B6D7ED69()
	{
		return ((::RPG::Client::IRogueTournPersonaStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8428AE09B3328CC_METHOD_1_AD6AB5B6B6D7ED69_OFFSET))(this);
	}
};
