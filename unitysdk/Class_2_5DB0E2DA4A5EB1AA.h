#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD81B4D0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xD81B0F0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_71AB010B5C68C5BF_OFFSET UNITYSDK_OFFSET(0xD81B750)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0xD81B8A0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xD81B7D0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD81B270)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xD81B530)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xD81B5B0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xD81B3B0)
#define CLASS_2_5DB0E2DA4A5EB1AA_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xD81B2E0)
#define CLASS_2_5DB0E2DA4A5EB1AA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xD81B190)
#define CLASS_2_5DB0E2DA4A5EB1AA_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD81B1E0)
#define CLASS_2_5DB0E2DA4A5EB1AA__CTOR_OFFSET UNITYSDK_OFFSET(0xD81B950)
#define CLASS_2_5DB0E2DA4A5EB1AA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD81B440)

inline static constexpr unsigned int Class_2_5DB0E2DA4A5EB1AA_TypeDefinitionIndex = 71775;

class Class_2_5DB0E2DA4A5EB1AA : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* GMDBIIJGHHH; // 0x0
	// static const ::System::String* KDODNCFEJFD; // 0x0
	// static const ::System::String* NMHICHPNEHN; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::UnityEngine::RectTransform* EOFIPGLDONA; // 0x68
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
	::System::Single NBCBLJAFBBJ; // 0x78
	::System::Single KOLOABGLOFA; // 0x7C
	::System::Single IGGGPOBEEPK; // 0x80

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
