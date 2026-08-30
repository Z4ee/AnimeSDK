#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_43FD6E21AEF38B88_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC7C0790)
#define CLASS_2_43FD6E21AEF38B88_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xC7C0720)
#define CLASS_2_43FD6E21AEF38B88__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C0880)

inline static constexpr unsigned int Class_2_43FD6E21AEF38B88_TypeDefinitionIndex = 72779;

class Class_2_43FD6E21AEF38B88 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Button* MKIJAAIAIOB; // 0x18
	::UnityEngine::UI::Button* KGNBGFLCEDB; // 0x20
	::UnityEngine::Transform* HBFGLBPANNP; // 0x28
	::UnityEngine::UI::Button* KBPPAEMBDFN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43FD6E21AEF38B88__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43FD6E21AEF38B88_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43FD6E21AEF38B88_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
