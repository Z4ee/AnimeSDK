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

#define CLASS_1_D00784C64067A6A7_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11C0BCC0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x11C0BDA0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_2C2C08A7E3721C7A_OFFSET UNITYSDK_OFFSET(0x11C0AA50)
#define CLASS_1_D00784C64067A6A7_METHOD_1_3E617B145B43F036_OFFSET UNITYSDK_OFFSET(0x11C0AF10)
#define CLASS_1_D00784C64067A6A7_METHOD_1_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0x11C0B950)
#define CLASS_1_D00784C64067A6A7_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x11C0A9C0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_EFDDE755A4CD13DC_OFFSET UNITYSDK_OFFSET(0x11C0B6D0)
#define CLASS_1_D00784C64067A6A7_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x11C0BF10)
#define CLASS_1_D00784C64067A6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x11C0A5A0)

inline static constexpr unsigned int Class_1_D00784C64067A6A7_TypeDefinitionIndex = 65389;

class Class_1_D00784C64067A6A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* Field_1_2; // 0x10
	::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::RPG::Client::FallingObjectTemplate* Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x30
	::System::Single Field_1_9; // 0x3C
	::UnityEngine::Vector3 Field_1_7; // 0x40
	::UnityEngine::Vector3 Field_1_8; // 0x4C
	::UnityEngine::Vector3 Field_1_5; // 0x58
	::UnityEngine::Vector3 Field_1_4; // 0x64

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

	::System::Void Method_1_56AAF22972BD1A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_56AAF22972BD1A66_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_26E509975F92479C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00784C64067A6A7_METHOD_1_FA662896843C137A_OFFSET))(this);
	}
};
