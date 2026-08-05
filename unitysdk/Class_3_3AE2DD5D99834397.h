#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_3AE2DD5D99834397_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x145B1450)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_3FF9D30FF32B119B_OFFSET UNITYSDK_OFFSET(0x145B16D0)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_81219D2ACCFDCE1A_OFFSET UNITYSDK_OFFSET(0x145B1870)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_A23E30949286E2EC_OFFSET UNITYSDK_OFFSET(0x145B1EE0)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_A8E4D265E17F41CB_OFFSET UNITYSDK_OFFSET(0x145B2420)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x145B1D10)
#define CLASS_3_3AE2DD5D99834397_METHOD_3_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0x145B1DA0)
#define CLASS_3_3AE2DD5D99834397__CTOR_OFFSET UNITYSDK_OFFSET(0x145B1680)

inline static constexpr unsigned int Class_3_3AE2DD5D99834397_TypeDefinitionIndex = 45598;

class Class_3_3AE2DD5D99834397 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_3FF9D30FF32B119B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_3FF9D30FF32B119B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_E0078F6C95D82674_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_A23E30949286E2EC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_A23E30949286E2EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_81219D2ACCFDCE1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_81219D2ACCFDCE1A_OFFSET))(this, a1);
	}

	::System::Void Method_3_A8E4D265E17F41CB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3AE2DD5D99834397_METHOD_3_A8E4D265E17F41CB_OFFSET))(this, a1);
	}
};
