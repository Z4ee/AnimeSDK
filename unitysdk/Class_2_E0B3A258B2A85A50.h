#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_684F0B2C967A7B27;
namespace System { class Random; }

#define CLASS_2_E0B3A258B2A85A50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167CBEB0)
#define CLASS_2_E0B3A258B2A85A50_METHOD_2_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x167CDBA0)
#define CLASS_2_E0B3A258B2A85A50_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x167CD300)
#define CLASS_2_E0B3A258B2A85A50_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x167CDD40)
#define CLASS_2_E0B3A258B2A85A50_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x167CC000)
#define CLASS_2_E0B3A258B2A85A50_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x167CDDB0)
#define CLASS_2_E0B3A258B2A85A50__CTOR_OFFSET UNITYSDK_OFFSET(0x167CBEA0)
#define CLASS_2_E0B3A258B2A85A50___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167CDCE0)

inline static constexpr unsigned int Class_2_E0B3A258B2A85A50_TypeDefinitionIndex = 32675;

class Class_2_E0B3A258B2A85A50 : public ::Class_1_5BE136E515AF9A61
{
public:
	::Il2CppArray<::Class_1_684F0B2C967A7B27*>* Field_2_0; // 0x18
	::System::Random* Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x28

	::System::Void _ctor(::Il2CppArray<::Class_1_684F0B2C967A7B27*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_684F0B2C967A7B27*>*))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_METHOD_2_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_06618C2A694360FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_METHOD_2_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0B3A258B2A85A50_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
