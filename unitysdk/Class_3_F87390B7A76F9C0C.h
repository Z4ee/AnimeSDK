#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_F87390B7A76F9C0C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16342800)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_3C26D5DDEE9325CF_OFFSET UNITYSDK_OFFSET(0x16344580)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_786E9AF6FD8473A5_OFFSET UNITYSDK_OFFSET(0x16342F70)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_916ED52879BD2AF0_OFFSET UNITYSDK_OFFSET(0x163435E0)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x16342F20)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x16342ED0)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_AF54AE7430F3FA33_OFFSET UNITYSDK_OFFSET(0x16343F10)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16343E80)
#define CLASS_3_F87390B7A76F9C0C_METHOD_3_D5D263FE0DDDA65D_OFFSET UNITYSDK_OFFSET(0x163429C0)
#define CLASS_3_F87390B7A76F9C0C__CTOR_OFFSET UNITYSDK_OFFSET(0x16342970)

inline static constexpr unsigned int Class_3_F87390B7A76F9C0C_TypeDefinitionIndex = 41948;

class Class_3_F87390B7A76F9C0C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_D5D263FE0DDDA65D(::UnityEngine::GameObject* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_D5D263FE0DDDA65D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_786E9AF6FD8473A5(::UnityEngine::GameObject* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_786E9AF6FD8473A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_AF54AE7430F3FA33(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_AF54AE7430F3FA33_OFFSET))(this, a1);
	}

	::System::Void Method_3_916ED52879BD2AF0(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_916ED52879BD2AF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3C26D5DDEE9325CF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_METHOD_3_3C26D5DDEE9325CF_OFFSET))(this, a1);
	}
};
