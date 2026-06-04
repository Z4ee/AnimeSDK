#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_929E979D9ED7139E;
namespace RPG::Client { class FallingObjectTemplate; }
namespace RPG::Client { class StageLiteInstanceItemRendererMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D00784C64067A6A7_METHOD_1_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x141FE4A0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_2C2C08A7E3721C7A_OFFSET UNITYSDK_OFFSET(0x141FD580)
#define CLASS_1_D00784C64067A6A7_METHOD_1_3E617B145B43F036_OFFSET UNITYSDK_OFFSET(0x141FDA40)
#define CLASS_1_D00784C64067A6A7_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x141FE830)
#define CLASS_1_D00784C64067A6A7_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x141FD4F0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x141FE920)
#define CLASS_1_D00784C64067A6A7_METHOD_1_EFDDE755A4CD13DC_OFFSET UNITYSDK_OFFSET(0x141FE220)
#define CLASS_1_D00784C64067A6A7_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x141FEAB0)
#define CLASS_1_D00784C64067A6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x141FD0B0)

inline static constexpr unsigned int Class_1_D00784C64067A6A7_TypeDefinitionIndex = 66316;

class Class_1_D00784C64067A6A7 : public ::System::Object
{
public:
	::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* Field_1_1; // 0x18
	::RPG::Client::FallingObjectTemplate* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::UnityEngine::Vector3 Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_7; // 0x54
	::UnityEngine::Vector3 Field_1_8; // 0x60
	::System::Single Field_1_9; // 0x6C

	::System::Void _ctor(::RPG::Client::FallingObjectTemplate* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FallingObjectTemplate*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C2C08A7E3721C7A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_2C2C08A7E3721C7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3E617B145B43F036(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_3E617B145B43F036_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EFDDE755A4CD13DC(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_EFDDE755A4CD13DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B85C1969225764F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_2B85C1969225764F_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}
};
