#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDamageConstConfig; }

#define CLASS_1_56A1684BE394769D_GET_DAMAGECONST_OFFSET UNITYSDK_OFFSET(0x158B8AE0)
#define CLASS_1_56A1684BE394769D_METHOD_1_636E94D72DD0CACF_OFFSET UNITYSDK_OFFSET(0x158B8A70)
#define CLASS_1_56A1684BE394769D_METHOD_1_C424BF6E1E1729A5_OFFSET UNITYSDK_OFFSET(0x158B8980)
#define CLASS_1_56A1684BE394769D_METHOD_1_E075D04B141989A4_OFFSET UNITYSDK_OFFSET(0x158B89F0)
#define CLASS_1_56A1684BE394769D_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x158B88E0)
#define CLASS_1_56A1684BE394769D_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x158B8930)
#define CLASS_1_56A1684BE394769D_SET_DAMAGECONST_OFFSET UNITYSDK_OFFSET(0x158B8AF0)
#define CLASS_1_56A1684BE394769D__CTOR_OFFSET UNITYSDK_OFFSET(0x158B8890)

inline static constexpr unsigned int Class_1_56A1684BE394769D_TypeDefinitionIndex = 54321;

class Class_1_56A1684BE394769D : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
	::RPG::GameCore::RtDamageConstConfig* _DamageConst_k__BackingField; // 0x18
	::System::UInt64 ENJPLJGNMPL; // 0x20
	::RPG::GameCore::FixPoint PDIDAFEHOND; // 0x28
	::System::UInt64 DPACLNJMILC; // 0x30
	::RPG::GameCore::FixPoint ABINBKACLJK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_C424BF6E1E1729A5(::RPG::GameCore::RtDamageConstConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_METHOD_1_C424BF6E1E1729A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E075D04B141989A4(::System::UInt64 a1, ::System::UInt64 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_METHOD_1_E075D04B141989A4_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_636E94D72DD0CACF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_METHOD_1_636E94D72DD0CACF_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtDamageConstConfig* get_DamageConst()
	{
		return ((::RPG::GameCore::RtDamageConstConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_GET_DAMAGECONST_OFFSET))(this);
	}

	::System::Void set_DamageConst(::RPG::GameCore::RtDamageConstConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_1_56A1684BE394769D_SET_DAMAGECONST_OFFSET))(this, a1);
	}
};
