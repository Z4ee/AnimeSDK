#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C6F607C9BAC0CC8B_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xC0659D0)
#define CLASS_2_C6F607C9BAC0CC8B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC065A40)
#define CLASS_2_C6F607C9BAC0CC8B__CTOR_OFFSET UNITYSDK_OFFSET(0xC065B20)

inline static constexpr unsigned int Class_2_C6F607C9BAC0CC8B_TypeDefinitionIndex = 71374;

class Class_2_C6F607C9BAC0CC8B : public ::Class_1_A167209E71412818
{
public:
	::RPG::Client::PrefabLoadMeta* DLIACBDHHLH; // 0x18
	::UnityEngine::UI::Text* JBGAMFPGDLI; // 0x20
	::UnityEngine::Transform* OJLKGKMFDLG; // 0x28
	::UnityEngine::Animation* NEPCECJCCDA; // 0x30
	::UnityEngine::Transform* BIEGCFNPGAF; // 0x38
	::UnityEngine::Transform* AOAKLBFLHDP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F607C9BAC0CC8B__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F607C9BAC0CC8B_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F607C9BAC0CC8B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
