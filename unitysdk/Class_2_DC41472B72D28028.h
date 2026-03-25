#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x8C95720)
#define CLASS_2_DC41472B72D28028_METHOD_2_37D8D2BDEDA565ED_OFFSET UNITYSDK_OFFSET(0x8C958B0)
#define CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8C955F0)
#define CLASS_2_DC41472B72D28028_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8C95D40)
#define CLASS_2_DC41472B72D28028_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C95CE0)
#define CLASS_2_DC41472B72D28028_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x8C95340)
#define CLASS_2_DC41472B72D28028_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x8C953E0)
#define CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x8C95B70)
#define CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x8C952C0)
#define CLASS_2_DC41472B72D28028_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8C95C70)
#define CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x8C95A10)
#define CLASS_2_DC41472B72D28028__CTOR_OFFSET UNITYSDK_OFFSET(0x8C95BD0)
#define CLASS_2_DC41472B72D28028__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C94F60)
#define CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8C95660)
#define CLASS_2_DC41472B72D28028___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C95C10)
#define CLASS_2_DC41472B72D28028___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8C95DA0)

inline static constexpr unsigned int Class_2_DC41472B72D28028_TypeDefinitionIndex = 59271;

class Class_2_DC41472B72D28028 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::MonoInControlButton* Field_2_4; // 0x60
	::RPG::Client::LocalizedText* Field_2_0; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::RPG::GameCore::AvatarDemoConfigRow* Field_2_6; // 0x78
	::RPG::Client::AnimatorButton* Field_2_2; // 0x80
	::UnityEngine::Coroutine* Field_2_8; // 0x88
	::RPG::Client::MonoInControlButton* Field_2_3; // 0x90
	::RPG::Client::AnimatorButton* Field_2_1; // 0x98
	::System::Boolean Field_2_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_37D8D2BDEDA565ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_37D8D2BDEDA565ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
