#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_784;
class Class_0_16E4307DCC419505_785;
class Class_1_4AF717D30078CC7E_1;

#define CLASS_1_75A691106ED441FB_GET_CLIENTAPI_OFFSET UNITYSDK_OFFSET(0xB24D410)
#define CLASS_1_75A691106ED441FB_GET_COOPBOSSLEVELMODE_OFFSET UNITYSDK_OFFSET(0xB24D420)
#define CLASS_1_75A691106ED441FB_GET_FIGHTTRANSPORT_OFFSET UNITYSDK_OFFSET(0xB24D400)
#define CLASS_1_75A691106ED441FB_GET_INITINFO_OFFSET UNITYSDK_OFFSET(0xB24D3F0)
#define CLASS_1_75A691106ED441FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB24D360)

inline static constexpr unsigned int Class_1_75A691106ED441FB_TypeDefinitionIndex = 60416;

class Class_1_75A691106ED441FB : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_785* _FightTransport_k__BackingField; // 0x10
	::Class_1_4AF717D30078CC7E_1* _InitInfo_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_784* _ClientApi_k__BackingField; // 0x20
	::RPG::GameCore::PetMarbleLevelMode _CoopBossLevelMode_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_4AF717D30078CC7E_1* a1, ::Class_0_16E4307DCC419505_785* a2, ::Class_0_16E4307DCC419505_784* a3, ::RPG::GameCore::PetMarbleLevelMode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*, ::Class_0_16E4307DCC419505_785*, ::Class_0_16E4307DCC419505_784*, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + CLASS_1_75A691106ED441FB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_4AF717D30078CC7E_1* get_InitInfo()
	{
		return ((::Class_1_4AF717D30078CC7E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A691106ED441FB_GET_INITINFO_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_785* get_FightTransport()
	{
		return ((::Class_0_16E4307DCC419505_785*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A691106ED441FB_GET_FIGHTTRANSPORT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_784* get_ClientApi()
	{
		return ((::Class_0_16E4307DCC419505_784*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A691106ED441FB_GET_CLIENTAPI_OFFSET))(this);
	}

	::RPG::GameCore::PetMarbleLevelMode get_CoopBossLevelMode()
	{
		return ((::RPG::GameCore::PetMarbleLevelMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A691106ED441FB_GET_COOPBOSSLEVELMODE_OFFSET))(this);
	}
};
