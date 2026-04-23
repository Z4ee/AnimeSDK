#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_4798B05B1DD74BF3_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x12946AA0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x12946B40)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12946C40)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x12947190)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x129470E0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12947020)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12946A30)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x129468E0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x12947240)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x129472B0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x12946EB0)
#define CLASS_2_4798B05B1DD74BF3_METHOD_2_EF6393714B3133B1_OFFSET UNITYSDK_OFFSET(0x12946CA0)
#define CLASS_2_4798B05B1DD74BF3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x12946950)
#define CLASS_2_4798B05B1DD74BF3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x129469A0)
#define CLASS_2_4798B05B1DD74BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x12947210)
#define CLASS_2_4798B05B1DD74BF3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12946BB0)
#define CLASS_2_4798B05B1DD74BF3___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12947320)

inline static constexpr unsigned int Class_2_4798B05B1DD74BF3_TypeDefinitionIndex = 65996;

class Class_2_4798B05B1DD74BF3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::UnityEngine::RectTransform* Field_2_1; // 0x70
	::System::Single Field_2_4; // 0x78
	::System::Single Field_2_3; // 0x7C
	::System::Single Field_2_5; // 0x80

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

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4798B05B1DD74BF3___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
