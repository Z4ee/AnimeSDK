#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5F3FA10EC56B9A0_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class MonoWavingBlockControl; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FD219B01AC2352E5_METHOD_2_61D35C2C9121EF4D_OFFSET UNITYSDK_OFFSET(0xE895660)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE8954C0)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xE8956E0)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE895480)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_EB4AEB5445AFFDCA_OFFSET UNITYSDK_OFFSET(0xE895500)
#define CLASS_2_FD219B01AC2352E5__CTOR_OFFSET UNITYSDK_OFFSET(0xE895470)

inline static constexpr unsigned int Class_2_FD219B01AC2352E5_TypeDefinitionIndex = 57535;

class Class_2_FD219B01AC2352E5 : public ::Class_1_E5F3FA10EC56B9A0_1
{
public:
	::RPG::Client::MonoWavingBlockControl* GIGFMBDOPOH; // 0x18
	::System::Nullable_1<::System::Int32> OBGJMDKPNCC; // 0x20

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_EB4AEB5445AFFDCA(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_EB4AEB5445AFFDCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_61D35C2C9121EF4D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_61D35C2C9121EF4D_OFFSET))(this, a1);
	}
};
