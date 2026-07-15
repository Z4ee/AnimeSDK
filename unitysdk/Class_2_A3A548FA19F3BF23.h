#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A3A548FA19F3BF23_METHOD_2_5A46ABA02A98BA1E_OFFSET UNITYSDK_OFFSET(0x167132C0)
#define CLASS_2_A3A548FA19F3BF23_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x16713180)
#define CLASS_2_A3A548FA19F3BF23_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x16714260)
#define CLASS_2_A3A548FA19F3BF23_METHOD_2_8A676FD25DEE63CE_OFFSET UNITYSDK_OFFSET(0x16713800)
#define CLASS_2_A3A548FA19F3BF23_METHOD_2_C1D1ED46FBFF65F7_OFFSET UNITYSDK_OFFSET(0x167139F0)
#define CLASS_2_A3A548FA19F3BF23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16714220)
#define CLASS_2_A3A548FA19F3BF23__CTOR_OFFSET UNITYSDK_OFFSET(0x16713100)

inline static constexpr unsigned int Class_2_A3A548FA19F3BF23_TypeDefinitionIndex = 65724;

class Class_2_A3A548FA19F3BF23 : public ::Class_1_6854A6346A56B2FF
{
public:
	::System::Single Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A46ABA02A98BA1E(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_5A46ABA02A98BA1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A676FD25DEE63CE(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_8A676FD25DEE63CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1D1ED46FBFF65F7(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_C1D1ED46FBFF65F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A548FA19F3BF23_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}
};
