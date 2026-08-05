#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_BA3016F70498DFA6_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x142289B0)
#define CLASS_2_BA3016F70498DFA6_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14228AD0)
#define CLASS_2_BA3016F70498DFA6_1_METHOD_2_90A9D3FC07AADABC_OFFSET UNITYSDK_OFFSET(0x14228B60)
#define CLASS_2_BA3016F70498DFA6_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14228C90)
#define CLASS_2_BA3016F70498DFA6_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14228BF0)
#define CLASS_2_BA3016F70498DFA6_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14228A50)
#define CLASS_2_BA3016F70498DFA6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14228AC0)

inline static constexpr unsigned int Class_2_BA3016F70498DFA6_1_TypeDefinitionIndex = 71848;

class Class_2_BA3016F70498DFA6_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x140; // 0x0
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_90A9D3FC07AADABC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1_METHOD_2_90A9D3FC07AADABC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA3016F70498DFA6_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
