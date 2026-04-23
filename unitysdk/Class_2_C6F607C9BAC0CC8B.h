#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C6F607C9BAC0CC8B_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xE655430)
#define CLASS_2_C6F607C9BAC0CC8B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE6554A0)
#define CLASS_2_C6F607C9BAC0CC8B__CTOR_OFFSET UNITYSDK_OFFSET(0xE655580)

inline static constexpr unsigned int Class_2_C6F607C9BAC0CC8B_TypeDefinitionIndex = 65824;

class Class_2_C6F607C9BAC0CC8B : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::PrefabLoadMeta* Field_2_3; // 0x18
	::UnityEngine::Animation* Field_2_2; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40

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
