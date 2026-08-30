#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinHandbookCardTabType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1383;
class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }

#define CLASS_1_F5686AE6622FEE30_METHOD_1_A952BB28355BFBA4_OFFSET UNITYSDK_OFFSET(0x13F04A10)
#define CLASS_1_F5686AE6622FEE30__CTOR_OFFSET UNITYSDK_OFFSET(0x13F04960)

inline static constexpr unsigned int Class_1_F5686AE6622FEE30_TypeDefinitionIndex = 79863;

class Class_1_F5686AE6622FEE30 : public ::System::Object
{
public:
	::Class_1_F248B058F5A06B98* DEEMJACOGII; // 0x10
	::Class_0_16E4307DCC419505_1383* LBNAGLIGKIO; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1383* a1, ::Class_1_F248B058F5A06B98* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1383*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + CLASS_1_F5686AE6622FEE30__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* Method_1_A952BB28355BFBA4(::RPG::Client::FateRin::Card::FateRinHandbookCardTabType a1, ::RPG::GameCore::FateRinHouguOwnerType a2)
	{
		return ((::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_F5686AE6622FEE30_METHOD_1_A952BB28355BFBA4_OFFSET))(this, a1, a2);
	}
};
