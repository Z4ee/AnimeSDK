#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1353;
namespace RPG::Client::ActivityMarble { class MarbleCoopBossPVPManager; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_016476096D639201_OFFSET UNITYSDK_OFFSET(0xBA6F350)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_0BF1772D76ABD2BB_OFFSET UNITYSDK_OFFSET(0xBA6FCA0)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_1D1713DC50EF2833_OFFSET UNITYSDK_OFFSET(0xBA6F3F0)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xBA6F7E0)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_68E3A302D0826390_OFFSET UNITYSDK_OFFSET(0xBA6EF70)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xBA6F740)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBA6F8F0)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_C008D149091D1915_OFFSET UNITYSDK_OFFSET(0xBA6F4C0)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_D4C84B0783436B6F_OFFSET UNITYSDK_OFFSET(0xBA6EF20)
#define CLASS_1_AD9F7CD06A0AC804_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xBA6F870)
#define CLASS_1_AD9F7CD06A0AC804__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6FD10)

inline static constexpr unsigned int Class_1_AD9F7CD06A0AC804_TypeDefinitionIndex = 74713;

class Class_1_AD9F7CD06A0AC804 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1353* CFKHNPGEAJA; // 0x10
	::System::Boolean HCDBKNCPMHE; // 0x18
	::System::Boolean PAJKNCJLLOK; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804__CTOR_OFFSET))(this);
	}

	::RPG::Client::PetMarble::PetMarbleMatchModeType Method_1_D4C84B0783436B6F()
	{
		return ((::RPG::Client::PetMarble::PetMarbleMatchModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_D4C84B0783436B6F_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_68E3A302D0826390(::Class_0_16E4307DCC419505_1353* a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Class_0_16E4307DCC419505_1353*))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_68E3A302D0826390_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_C008D149091D1915()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_C008D149091D1915_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_BC516BD7B592E51E_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_1D1713DC50EF2833()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_1D1713DC50EF2833_OFFSET))(this);
	}

	::RPG::Client::PetMarble::PetMarbleMatchState Method_1_0BF1772D76ABD2BB(::RPG::Client::LobbyState a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::PetMarble::PetMarbleMatchState(*)(::PVOID, ::RPG::Client::LobbyState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_0BF1772D76ABD2BB_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager* Method_1_016476096D639201()
	{
		return ((::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD9F7CD06A0AC804_METHOD_1_016476096D639201_OFFSET))(this);
	}
};
