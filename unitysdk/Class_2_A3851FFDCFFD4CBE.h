#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_A3851FFDCFFD4CBE_METHOD_2_404D1559164802CF_OFFSET UNITYSDK_OFFSET(0x1409C3B0)
#define CLASS_2_A3851FFDCFFD4CBE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1409C210)
#define CLASS_2_A3851FFDCFFD4CBE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1409C320)
#define CLASS_2_A3851FFDCFFD4CBE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1409C4B0)
#define CLASS_2_A3851FFDCFFD4CBE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1409C420)
#define CLASS_2_A3851FFDCFFD4CBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1409C2A0)
#define CLASS_2_A3851FFDCFFD4CBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1409C310)

inline static constexpr unsigned int Class_2_A3851FFDCFFD4CBE_TypeDefinitionIndex = 67993;

class Class_2_A3851FFDCFFD4CBE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x114; // 0x0
	::UnityEngine::AnimationCurve* Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_404D1559164802CF(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE_METHOD_2_404D1559164802CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3851FFDCFFD4CBE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
