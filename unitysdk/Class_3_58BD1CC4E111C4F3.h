#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_B83767DAA3ADB444;
class Class_3_2A4351F9637A49DE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_58BD1CC4E111C4F3_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14DD4680)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_21A5433EDB9E3BFB_OFFSET UNITYSDK_OFFSET(0x14DD4E10)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_284F237E63A6F10D_OFFSET UNITYSDK_OFFSET(0x14DD4BF0)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_5B10C66E7D347421_OFFSET UNITYSDK_OFFSET(0x14DD4B20)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_A6E766FFE7A03EFA_OFFSET UNITYSDK_OFFSET(0x14DD4EB0)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14DD4D80)
#define CLASS_3_58BD1CC4E111C4F3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14DD4CF0)
#define CLASS_3_58BD1CC4E111C4F3_UPDATE_OFFSET UNITYSDK_OFFSET(0x14DD4970)
#define CLASS_3_58BD1CC4E111C4F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD4AD0)

inline static constexpr unsigned int Class_3_58BD1CC4E111C4F3_TypeDefinitionIndex = 70797;

class Class_3_58BD1CC4E111C4F3 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5B10C66E7D347421(::Class_3_2A4351F9637A49DE* a1, ::MoleMole::Battle::GamePlayLogicKind a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_2A4351F9637A49DE*, ::MoleMole::Battle::GamePlayLogicKind, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_5B10C66E7D347421_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_B83767DAA3ADB444* Method_3_284F237E63A6F10D()
	{
		return ((::Class_1_B83767DAA3ADB444*(*)())((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_284F237E63A6F10D_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_21A5433EDB9E3BFB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_21A5433EDB9E3BFB_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A6E766FFE7A03EFA(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3_METHOD_3_A6E766FFE7A03EFA_OFFSET))(a1, a2);
	}
};
