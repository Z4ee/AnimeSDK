#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_7AB88D713F5121B3_50;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C7E4836FE12CD44B_METHOD_2_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x16410C30)
#define CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x16410EA0)
#define CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16410E00)
#define CLASS_2_C7E4836FE12CD44B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16410F70)
#define CLASS_2_C7E4836FE12CD44B__CTOR_OFFSET UNITYSDK_OFFSET(0x16410F40)
#define CLASS_2_C7E4836FE12CD44B__ONBIND_OFFSET UNITYSDK_OFFSET(0x16410AB0)

inline static constexpr unsigned int Class_2_C7E4836FE12CD44B_TypeDefinitionIndex = 71512;

class Class_2_C7E4836FE12CD44B : public ::Class_1_34917908B7833130
{
public:
	static ::System::Int32* StaticGet_PLGAAIAIPGD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7E4836FE12CD44B_TypeDefinitionIndex)->GetStaticField(0x149C0);
	}
	static ::System::Int32* StaticGet_DPJINPBAFEE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7E4836FE12CD44B_TypeDefinitionIndex)->GetStaticField(0x149C4);
	}
	::UnityEngine::UI::Text* GBFKFBCCLKK; // 0x60
	::UnityEngine::Transform* MADHMFCPODL; // 0x68
	::UnityEngine::UI::Text* BDEECCDMIAG; // 0x70
	::UnityEngine::UI::Text* FMHBPPEKCBG; // 0x78
	::UnityEngine::Animator* APPGGMLEPLN; // 0x80
	::UnityEngine::UI::Text* NPLDBMIFBOF; // 0x88
	::UnityEngine::UI::Text* MHFPCIJLJOJ; // 0x90
	::System::UInt32 EJNMGLJJEOO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8D0A2531C88B32B1(::Class_1_7AB88D713F5121B3_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_50*))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
