#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MotionFlag.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_A043D803AC652E6E_CLONE_OFFSET UNITYSDK_OFFSET(0x115D76B0)
#define CLASS_1_A043D803AC652E6E_ISDONE_OFFSET UNITYSDK_OFFSET(0x115E5430)
#define CLASS_1_A043D803AC652E6E_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x115E5470)
#define CLASS_1_A043D803AC652E6E_METHOD_1_43A4ECF50F4E8DBE_OFFSET UNITYSDK_OFFSET(0x115E5230)
#define CLASS_1_A043D803AC652E6E_METHOD_1_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x115E5210)
#define CLASS_1_A043D803AC652E6E_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x115E51F0)
#define CLASS_1_A043D803AC652E6E_METHOD_1_59B7CA74552F5179_OFFSET UNITYSDK_OFFSET(0x115E5240)
#define CLASS_1_A043D803AC652E6E_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x115E5250)
#define CLASS_1_A043D803AC652E6E_METHOD_1_BFB8A9EC107A5B24_1_OFFSET UNITYSDK_OFFSET(0x115E5220)
#define CLASS_1_A043D803AC652E6E_METHOD_1_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x115E5200)
#define CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x115E53B0)
#define CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x115E53F0)
#define CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115E5370)
#define CLASS_1_A043D803AC652E6E_REVERSE_OFFSET UNITYSDK_OFFSET(0x115D75D0)
#define CLASS_1_A043D803AC652E6E_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x115E52B0)
#define CLASS_1_A043D803AC652E6E_STEP_OFFSET UNITYSDK_OFFSET(0x115E5310)
#define CLASS_1_A043D803AC652E6E__CTOR_OFFSET UNITYSDK_OFFSET(0x115E5290)

inline static constexpr unsigned int Class_1_A043D803AC652E6E_TypeDefinitionIndex = 60257;

class Class_1_A043D803AC652E6E : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A043D803AC652E6E_TypeDefinitionIndex)->GetStaticField(0x11FF0);
	}
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::RPG::Client::Motions::MotionFlag Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void Method_1_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_4D71BCFB74C16073_1_OFFSET))(this);
	}

	::System::Void Method_1_BFB8A9EC107A5B24_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_BFB8A9EC107A5B24_1_OFFSET))(this, a1);
	}

	::RPG::Client::Motions::MotionFlag Method_1_43A4ECF50F4E8DBE()
	{
		return ((::RPG::Client::Motions::MotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_43A4ECF50F4E8DBE_OFFSET))(this);
	}

	::System::Void Method_1_59B7CA74552F5179(::RPG::Client::Motions::MotionFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Motions::MotionFlag))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_59B7CA74552F5179_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void Step(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_STEP_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_ISDONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_REVERSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A043D803AC652E6E_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
