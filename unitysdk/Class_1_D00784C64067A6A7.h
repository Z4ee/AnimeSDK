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

#define CLASS_1_D00784C64067A6A7_METHOD_1_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x164DCE10)
#define CLASS_1_D00784C64067A6A7_METHOD_1_2C2C08A7E3721C7A_OFFSET UNITYSDK_OFFSET(0x164DBEF0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_3E617B145B43F036_OFFSET UNITYSDK_OFFSET(0x164DC3B0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x164DD1A0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x164DBE60)
#define CLASS_1_D00784C64067A6A7_METHOD_1_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x164DD290)
#define CLASS_1_D00784C64067A6A7_METHOD_1_EFDDE755A4CD13DC_OFFSET UNITYSDK_OFFSET(0x164DCB90)
#define CLASS_1_D00784C64067A6A7_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x164DD420)
#define CLASS_1_D00784C64067A6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x164DBA40)

inline static constexpr unsigned int Class_1_D00784C64067A6A7_TypeDefinitionIndex = 70936;

class Class_1_D00784C64067A6A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* BHJBFKOHLII; // 0x10
	::UnityEngine::GameObject* PLAJENPLCNM; // 0x18
	::RPG::Client::FallingObjectTemplate* OBPFHANLBIG; // 0x20
	::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* EFJIMACIJAP; // 0x28
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
	::System::Single FPDLMIIEGEB; // 0x3C
	::UnityEngine::Vector3 LGIMCMOPFFN; // 0x40
	::UnityEngine::Vector3 IEELGIPAPFK; // 0x4C
	::UnityEngine::Vector3 GCJMFBKLGHI; // 0x58
	::UnityEngine::Vector3 FLNOBMJMDNG; // 0x64

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

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_FA662896843C137A_OFFSET))(this);
	}
};
