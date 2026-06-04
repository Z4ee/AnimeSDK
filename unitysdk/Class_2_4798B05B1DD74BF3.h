#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_4798B05B1DD74BF3_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x118FFBF0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x118FFC90)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x118FFD90)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x119002D0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x11900380)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x11900220)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x11900160)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118FFB80)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x118FFA30)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x119003E0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x118FFFF0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_EF6393714B3133B1_OFFSET UNITYSDK_OFFSET(0x118FFDF0)
#define CLASS_2_4798B05B1DD74BF3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x118FFAA0)
#define CLASS_2_4798B05B1DD74BF3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x118FFAF0)
#define CLASS_2_4798B05B1DD74BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x11900350)
#define CLASS_2_4798B05B1DD74BF3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x118FFD00)
#define CLASS_2_4798B05B1DD74BF3___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11900440)

inline static constexpr unsigned int Class_2_4798B05B1DD74BF3_TypeDefinitionIndex = 66929;

class Class_2_4798B05B1DD74BF3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::System::Single Field_2_6; // 0x78
	::System::Single Field_2_7; // 0x7C
	::System::Single Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
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

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
