#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91C9195F7AC754D8;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir::Legacy { class PixAirEquipDisplayData; }

#define CLASS_1_D031E8F06825AB4F_METHOD_1_5FA561134832E5E9_OFFSET UNITYSDK_OFFSET(0xB97CB50)
#define CLASS_1_D031E8F06825AB4F_METHOD_1_6DB6544CDB9B0E75_OFFSET UNITYSDK_OFFSET(0xB97CA70)
#define CLASS_1_D031E8F06825AB4F_METHOD_1_E79BCC05C8E5DC2E_OFFSET UNITYSDK_OFFSET(0xB97CC30)
#define CLASS_1_D031E8F06825AB4F_START_OFFSET UNITYSDK_OFFSET(0xB97C9F0)
#define CLASS_1_D031E8F06825AB4F_STOP_OFFSET UNITYSDK_OFFSET(0xB97CA30)
#define CLASS_1_D031E8F06825AB4F__CTOR_OFFSET UNITYSDK_OFFSET(0xB97CCF0)

inline static constexpr unsigned int Class_1_D031E8F06825AB4F_TypeDefinitionIndex = 78739;

class Class_1_D031E8F06825AB4F : public ::System::Object
{
public:
	::Class_1_91C9195F7AC754D8* NMLAOCMPPPP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_STOP_OFFSET))(this);
	}

	::RPG::Client::PixAir::PixAirBattleEquipsViewModel* Method_1_6DB6544CDB9B0E75()
	{
		return ((::RPG::Client::PixAir::PixAirBattleEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_6DB6544CDB9B0E75_OFFSET))(this);
	}

	::RPG::Client::PixAir::PixAirBagEquipsViewModel* Method_1_5FA561134832E5E9()
	{
		return ((::RPG::Client::PixAir::PixAirBagEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_5FA561134832E5E9_OFFSET))(this);
	}

	::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData* Method_1_E79BCC05C8E5DC2E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_E79BCC05C8E5DC2E_OFFSET))(this, a1, a2);
	}
};
