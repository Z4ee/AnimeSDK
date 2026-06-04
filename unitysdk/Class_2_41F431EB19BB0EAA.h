#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_41F431EB19BB0EAA_METHOD_2_07D7C7513828ED45_OFFSET UNITYSDK_OFFSET(0xDE2E2A0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xDE2DE10)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_26CCD09A236D04EE_OFFSET UNITYSDK_OFFSET(0xDE2DA90)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xDE2E310)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xDE2E1B0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0xDE2E200)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_793399FBE48890BB_OFFSET UNITYSDK_OFFSET(0xDE2E210)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_A5FE31E5481A91C4_OFFSET UNITYSDK_OFFSET(0xDE2DC00)
#define CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE2DA10)

inline static constexpr unsigned int Class_2_41F431EB19BB0EAA_TypeDefinitionIndex = 64354;

class Class_2_41F431EB19BB0EAA : public ::Class_1_6854A6346A56B2FF
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_793399FBE48890BB(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_793399FBE48890BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_07D7C7513828ED45(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_07D7C7513828ED45_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
