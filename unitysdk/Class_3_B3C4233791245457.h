#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_846182BC37DE078E_1;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_B3C4233791245457_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16256A10)
#define CLASS_3_B3C4233791245457_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16256BF0)
#define CLASS_3_B3C4233791245457_METHOD_3_0671A658DD7403FF_OFFSET UNITYSDK_OFFSET(0x16257380)
#define CLASS_3_B3C4233791245457_METHOD_3_28AD0DE7030741FC_OFFSET UNITYSDK_OFFSET(0x16257220)
#define CLASS_3_B3C4233791245457_METHOD_3_454D70CDB124A604_OFFSET UNITYSDK_OFFSET(0x16257530)
#define CLASS_3_B3C4233791245457_METHOD_3_5B9A404D4873E310_OFFSET UNITYSDK_OFFSET(0x16256DA0)
#define CLASS_3_B3C4233791245457_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16257190)
#define CLASS_3_B3C4233791245457_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16257100)
#define CLASS_3_B3C4233791245457_METHOD_3_CA39E400964FCAD1_OFFSET UNITYSDK_OFFSET(0x16256E40)
#define CLASS_3_B3C4233791245457_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x162577F0)
#define CLASS_3_B3C4233791245457__CTOR_OFFSET UNITYSDK_OFFSET(0x16256D50)

inline static constexpr unsigned int Class_3_B3C4233791245457_TypeDefinitionIndex = 87316;

class Class_3_B3C4233791245457 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5B9A404D4873E310(::Class_3_846182BC37DE078E_1* a1, ::MoleMole::Config::ConfigFrozenBuff* a2)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E_1*, ::MoleMole::Config::ConfigFrozenBuff*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_5B9A404D4873E310_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_28AD0DE7030741FC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_28AD0DE7030741FC_OFFSET))(a1);
	}

	static ::System::Void Method_3_CA39E400964FCAD1(::Class_3_846182BC37DE078E_1* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E_1*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_CA39E400964FCAD1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_454D70CDB124A604(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_454D70CDB124A604_OFFSET))(a1);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_0671A658DD7403FF(::Class_3_846182BC37DE078E_1* a1)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E_1*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457_METHOD_3_0671A658DD7403FF_OFFSET))(a1);
	}
};
