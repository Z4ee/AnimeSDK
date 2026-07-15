#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1ACE0263147688BB;
namespace RPG::Client::Prop::CoilPuzzle { class RigCoilPuzzleBoard; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_1_EBC347C362DFF976_METHOD_1_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x17F874D0)
#define CLASS_1_EBC347C362DFF976_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0x17F87640)
#define CLASS_1_EBC347C362DFF976_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x17F875A0)
#define CLASS_1_EBC347C362DFF976_METHOD_1_79CF584A1A32664A_OFFSET UNITYSDK_OFFSET(0x17F86C60)
#define CLASS_1_EBC347C362DFF976_METHOD_1_9E36D95DE7534F6F_OFFSET UNITYSDK_OFFSET(0x17F870A0)
#define CLASS_1_EBC347C362DFF976_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17F876E0)
#define CLASS_1_EBC347C362DFF976_METHOD_1_BC19473A0B3069DE_OFFSET UNITYSDK_OFFSET(0x17F868F0)
#define CLASS_1_EBC347C362DFF976_METHOD_1_C3B50927F0CCA612_OFFSET UNITYSDK_OFFSET(0x17F869B0)
#define CLASS_1_EBC347C362DFF976__CTOR_OFFSET UNITYSDK_OFFSET(0x17F86840)

inline static constexpr unsigned int Class_1_EBC347C362DFF976_TypeDefinitionIndex = 75020;

class Class_1_EBC347C362DFF976 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* Field_1_1; // 0x18
	::UnityEngine::MeshRenderer* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_BC19473A0B3069DE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_BC19473A0B3069DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C3B50927F0CCA612(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_C3B50927F0CCA612_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_79CF584A1A32664A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_79CF584A1A32664A_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_9E36D95DE7534F6F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_9E36D95DE7534F6F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_1ACE0263147688BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ACE0263147688BB*))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222_1(::Class_1_1ACE0263147688BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ACE0263147688BB*))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_70437D85C11C5222_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBC347C362DFF976_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
