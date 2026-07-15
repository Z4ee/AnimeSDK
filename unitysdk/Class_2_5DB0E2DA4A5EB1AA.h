#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17D9A530)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x17D9A150)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_71AB010B5C68C5BF_OFFSET UNITYSDK_OFFSET(0x17D9A7B0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x17D9A900)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x17D9A830)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17D9A2D0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x17D9A590)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x17D9A610)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x17D9A410)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x17D9A340)
#define CLASS_2_5DB0E2DA4A5EB1AA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17D9A1F0)
#define CLASS_2_5DB0E2DA4A5EB1AA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17D9A240)
#define CLASS_2_5DB0E2DA4A5EB1AA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9A9B0)
#define CLASS_2_5DB0E2DA4A5EB1AA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17D9A4A0)

inline static constexpr unsigned int Class_2_5DB0E2DA4A5EB1AA_TypeDefinitionIndex = 68577;

class Class_2_5DB0E2DA4A5EB1AA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::RPG::GameCore::GameEntity* Field_2_5; // 0x70
	::System::Single Field_2_6; // 0x78
	::System::Single Field_2_7; // 0x7C
	::System::Single Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_71AB010B5C68C5BF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_71AB010B5C68C5BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}
};
