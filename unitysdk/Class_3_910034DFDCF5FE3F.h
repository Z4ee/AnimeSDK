#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_105013703884A094;
class Class_3_80012FE282D692CD;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_910034DFDCF5FE3F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFB0F6E0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0xFB0FD60)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_226E434DBADE1BDC_OFFSET UNITYSDK_OFFSET(0xFB10480)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_69B96281FEA25FB5_OFFSET UNITYSDK_OFFSET(0xFB0FB60)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_6CAA14295963ECC8_OFFSET UNITYSDK_OFFSET(0xFB0FF70)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_8E39177C5FE72449_OFFSET UNITYSDK_OFFSET(0xFB10080)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0xFB10440)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0xFB0FC00)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFB0FC40)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFB0FCD0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB0FAD0)
#define CLASS_3_910034DFDCF5FE3F_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFB0F910)
#define CLASS_3_910034DFDCF5FE3F_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xFB0F950)
#define CLASS_3_910034DFDCF5FE3F__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0FA80)

inline static constexpr unsigned int Class_3_910034DFDCF5FE3F_TypeDefinitionIndex = 47213;

class Class_3_910034DFDCF5FE3F : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_69B96281FEA25FB5(::Class_3_80012FE282D692CD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_69B96281FEA25FB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_07A48CE1AA24868D_OFFSET))(a1);
	}

	static ::System::Void Method_3_6CAA14295963ECC8(::Class_3_80012FE282D692CD* a1, ::Class_1_105013703884A094* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Config::ConfigPosRot* a6)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::Class_1_105013703884A094*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_6CAA14295963ECC8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_8E39177C5FE72449(::Class_3_80012FE282D692CD* a1, ::Class_1_105013703884A094* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::Class_1_105013703884A094*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_8E39177C5FE72449_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_226E434DBADE1BDC(::Class_3_80012FE282D692CD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_226E434DBADE1BDC_OFFSET))(a1, a2);
	}
};
