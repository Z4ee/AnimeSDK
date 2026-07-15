#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_41F431EB19BB0EAA_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x16982930)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x16982CD0)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x16982D20)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_A5FE31E5481A91C4_OFFSET UNITYSDK_OFFSET(0x16982720)
#define CLASS_2_41F431EB19BB0EAA_METHOD_2_D0A7851D945653F7_OFFSET UNITYSDK_OFFSET(0x16982610)
#define CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16982590)

inline static constexpr unsigned int Class_2_41F431EB19BB0EAA_TypeDefinitionIndex = 65725;

class Class_2_41F431EB19BB0EAA : public ::Class_1_6854A6346A56B2FF
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0A7851D945653F7(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_41F431EB19BB0EAA_METHOD_2_D0A7851D945653F7_OFFSET))(this, a1);
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
};
