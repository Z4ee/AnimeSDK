#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_54A1D8F91AB982FE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1855ECA0)
#define CLASS_2_54A1D8F91AB982FE_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1855EDE0)
#define CLASS_2_54A1D8F91AB982FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1855EE50)

inline static constexpr unsigned int Class_2_54A1D8F91AB982FE_TypeDefinitionIndex = 72736;

class Class_2_54A1D8F91AB982FE : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Text* EFDOLJLHGNG; // 0x18
	::UnityEngine::UI::Text* APBADKAOJPH; // 0x20
	::UnityEngine::UI::Text* MIKHNILLLCK; // 0x28
	::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x30
	::UnityEngine::UI::Button* ODBHKKIJNEK; // 0x38
	::UnityEngine::UI::Text* CEPGGFOJNCC; // 0x40
	::UnityEngine::UI::Button* GJINCGEJDAG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
