#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7FB1976AEB7689C7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_6_95BA83EAA68188A1;
namespace System { class String; }

#define CLASS_1_6F9830BFC98BF7B6_METHOD_1_B79653A53657F2B4_OFFSET UNITYSDK_OFFSET(0x177C73A0)
#define CLASS_1_6F9830BFC98BF7B6_METHOD_1_B98A585080E2577F_OFFSET UNITYSDK_OFFSET(0x177C7260)
#define CLASS_1_6F9830BFC98BF7B6__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7090)

inline static constexpr unsigned int Class_1_6F9830BFC98BF7B6_TypeDefinitionIndex = 79324;

class Class_1_6F9830BFC98BF7B6 : public ::System::Object
{
public:
	::Class_6_95BA83EAA68188A1* KMJDIEJMGLI; // 0x10
	::Class_6_95BA83EAA68188A1* EAFNFCALNPF; // 0x18
	::System::String* IOOAAMGICKC; // 0x20
	::System::String* IOABPJAFBOJ; // 0x28
	::System::Single NDKKKNKFAPH; // 0x30
	::System::Single JCDKACJFACD; // 0x34
	::UnityEngine::Vector3 AGDMFOBNDLG; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F9830BFC98BF7B6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_B98A585080E2577F()
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F9830BFC98BF7B6_METHOD_1_B98A585080E2577F_OFFSET))(this);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_B79653A53657F2B4(::System::Single a1)
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F9830BFC98BF7B6_METHOD_1_B79653A53657F2B4_OFFSET))(this, a1);
	}
};
