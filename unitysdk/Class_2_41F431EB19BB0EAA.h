#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C187E3BA406EEF9F;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_41F431EB19BB0EAA_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x115085B0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_26CCD09A236D04EE_OFFSET UNITYSDK_OFFSET(0x11508230)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11508AD0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x11508950)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x115089A0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_972F9F2CC17A4649_1_OFFSET UNITYSDK_OFFSET(0x11508A50)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_972F9F2CC17A4649_OFFSET UNITYSDK_OFFSET(0x115089B0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_A5FE31E5481A91C4_OFFSET UNITYSDK_OFFSET(0x115083A0)
#define CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x115081B0)

inline static constexpr unsigned int Class_2_41F431EB19BB0EAA_TypeDefinitionIndex = 56194;

class Class_2_41F431EB19BB0EAA : public ::Class_1_6854A6346A56B2FF
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_26CCD09A236D04EE(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_26CCD09A236D04EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5FE31E5481A91C4(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_A5FE31E5481A91C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}

	::System::Void Method_2_972F9F2CC17A4649(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_972F9F2CC17A4649_OFFSET))(this, P0);
	}

	::System::Void Method_2_972F9F2CC17A4649_1(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_972F9F2CC17A4649_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
