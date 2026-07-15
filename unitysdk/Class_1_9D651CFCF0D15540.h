#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1272;
class Class_0_16E4307DCC419505_1302;
class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }

#define CLASS_1_9D651CFCF0D15540_METHOD_1_1B5D1B7FA9B67E08_OFFSET UNITYSDK_OFFSET(0x16BDA050)
#define CLASS_1_9D651CFCF0D15540__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDA040)

inline static constexpr unsigned int Class_1_9D651CFCF0D15540_TypeDefinitionIndex = 76193;

class Class_1_9D651CFCF0D15540 : public ::System::Object
{
public:
	::Class_1_F248B058F5A06B98* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1302* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1272* Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1302* a1, ::Class_1_F248B058F5A06B98* a2, ::Class_0_16E4307DCC419505_1272* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1302*, ::Class_1_F248B058F5A06B98*, ::Class_0_16E4307DCC419505_1272*))((::PBYTE)hIl2Cpp + CLASS_1_9D651CFCF0D15540__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* Method_1_1B5D1B7FA9B67E08(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_9D651CFCF0D15540_METHOD_1_1B5D1B7FA9B67E08_OFFSET))(this, a1);
	}
};
