#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_4798B05B1DD74BF3_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x18C9AA00)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x18C9AAA0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18C9ABA0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x18C9B0B0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x18C9AE00)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x18C9A810)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x18C9B000)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x18C9AF40)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18C9A990)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_EF6393714B3133B1_OFFSET UNITYSDK_OFFSET(0x18C9AC00)
#define CLASS_2_4798B05B1DD74BF3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18C9A8B0)
#define CLASS_2_4798B05B1DD74BF3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18C9A900)
#define CLASS_2_4798B05B1DD74BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9B130)
#define CLASS_2_4798B05B1DD74BF3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18C9AB10)

inline static constexpr unsigned int Class_2_4798B05B1DD74BF3_TypeDefinitionIndex = 71554;

class Class_2_4798B05B1DD74BF3 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* EDFBNBONLCF; // 0x0
	// static const ::System::String* KDODNCFEJFD; // 0x0
	// static const ::System::String* NMHICHPNEHN; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::UnityEngine::RectTransform* KJOIKPFMLOE; // 0x70
	::System::Single NBCBLJAFBBJ; // 0x78
	::System::Single IGGGPOBEEPK; // 0x7C
	::System::Single KOLOABGLOFA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF6393714B3133B1(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_EF6393714B3133B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}
};
