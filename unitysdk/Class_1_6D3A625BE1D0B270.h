#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6D3A625BE1D0B270_GET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0x113F07D0)
#define CLASS_1_6D3A625BE1D0B270_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x113F07B0)
#define CLASS_1_6D3A625BE1D0B270_METHOD_1_42B760F0E6D3181D_OFFSET UNITYSDK_OFFSET(0x113F0890)
#define CLASS_1_6D3A625BE1D0B270_METHOD_1_757EF744508E1D67_OFFSET UNITYSDK_OFFSET(0x113F0940)
#define CLASS_1_6D3A625BE1D0B270_METHOD_1_BB33BB07CA0090E0_OFFSET UNITYSDK_OFFSET(0x113F07F0)
#define CLASS_1_6D3A625BE1D0B270_SET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0x113F07E0)
#define CLASS_1_6D3A625BE1D0B270_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x113F07C0)
#define CLASS_1_6D3A625BE1D0B270__CTOR_OFFSET UNITYSDK_OFFSET(0x113F0AE0)

inline static constexpr unsigned int Class_1_6D3A625BE1D0B270_TypeDefinitionIndex = 46424;

class Class_1_6D3A625BE1D0B270 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_7; // 0x10
	::RPG::GameCore::BigFixPoint _DamageFP_k__BackingField; // 0x18
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_1; // 0x34
	::System::Double _TotalDamage_k__BackingField; // 0x38
	::System::Double Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270__CTOR_OFFSET))(this);
	}

	::System::Double get_TotalDamage()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_GET_TOTALDAMAGE_OFFSET))(this);
	}

	::System::Void set_TotalDamage(::System::Double value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_SET_TOTALDAMAGE_OFFSET))(this, value);
	}

	::RPG::GameCore::BigFixPoint get_DamageFP()
	{
		return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_GET_DAMAGEFP_OFFSET))(this);
	}

	::System::Void set_DamageFP(::RPG::GameCore::BigFixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_SET_DAMAGEFP_OFFSET))(this, value);
	}

	::System::Double Method_1_BB33BB07CA0090E0()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_METHOD_1_BB33BB07CA0090E0_OFFSET))(this);
	}

	::System::Void Method_1_42B760F0E6D3181D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_METHOD_1_42B760F0E6D3181D_OFFSET))(this, a1);
	}

	::System::Void Method_1_757EF744508E1D67(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6D3A625BE1D0B270_METHOD_1_757EF744508E1D67_OFFSET))(this, a1, a2);
	}
};
