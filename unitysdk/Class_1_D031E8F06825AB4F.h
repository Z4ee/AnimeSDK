#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17365F5FA0311FC9;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir::Legacy { class PixAirEquipDisplayData; }

#define CLASS_1_D031E8F06825AB4F_METHOD_1_367A11A3B5280620_OFFSET UNITYSDK_OFFSET(0xA6567F0)
#define CLASS_1_D031E8F06825AB4F_METHOD_1_6D6A929CEFD846AC_OFFSET UNITYSDK_OFFSET(0xA656740)
#define CLASS_1_D031E8F06825AB4F_METHOD_1_E79BCC05C8E5DC2E_OFFSET UNITYSDK_OFFSET(0xA6568A0)
#define CLASS_1_D031E8F06825AB4F_START_OFFSET UNITYSDK_OFFSET(0xA6566C0)
#define CLASS_1_D031E8F06825AB4F_STOP_OFFSET UNITYSDK_OFFSET(0xA656700)
#define CLASS_1_D031E8F06825AB4F__CTOR_OFFSET UNITYSDK_OFFSET(0xA656960)

inline static constexpr unsigned int Class_1_D031E8F06825AB4F_TypeDefinitionIndex = 73542;

class Class_1_D031E8F06825AB4F : public ::System::Object
{
public:
	::Class_1_17365F5FA0311FC9* Field_1_0; // 0x10

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

	::RPG::Client::PixAir::PixAirBattleEquipsViewModel* Method_1_6D6A929CEFD846AC()
	{
		return ((::RPG::Client::PixAir::PixAirBattleEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_6D6A929CEFD846AC_OFFSET))(this);
	}

	::RPG::Client::PixAir::PixAirBagEquipsViewModel* Method_1_367A11A3B5280620()
	{
		return ((::RPG::Client::PixAir::PixAirBagEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_367A11A3B5280620_OFFSET))(this);
	}

	::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData* Method_1_E79BCC05C8E5DC2E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D031E8F06825AB4F_METHOD_1_E79BCC05C8E5DC2E_OFFSET))(this, a1, a2);
	}
};
