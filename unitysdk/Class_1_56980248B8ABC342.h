#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_56980248B8ABC342_METHOD_1_1DCE6CC551064A0F_OFFSET UNITYSDK_OFFSET(0x1648B660)
#define CLASS_1_56980248B8ABC342_METHOD_1_63C4D8813662BF85_OFFSET UNITYSDK_OFFSET(0x1648B6C0)
#define CLASS_1_56980248B8ABC342_METHOD_1_E2E6F784373AD65A_OFFSET UNITYSDK_OFFSET(0x1648B570)
#define CLASS_1_56980248B8ABC342_METHOD_1_F2D2336B9B778B93_1_OFFSET UNITYSDK_OFFSET(0x1648B510)
#define CLASS_1_56980248B8ABC342_METHOD_1_F2D2336B9B778B93_OFFSET UNITYSDK_OFFSET(0x1648B480)

inline static constexpr unsigned int Class_1_56980248B8ABC342_TypeDefinitionIndex = 75973;

class Class_1_56980248B8ABC342 : public ::System::Object
{
public:
	static ::System::Nullable_1<::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode>* StaticGet_Field_1_0()
	{
		return (::System::Nullable_1<::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_56980248B8ABC342_TypeDefinitionIndex)->GetStaticField(0x7E40);
	}

	static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode Method_1_F2D2336B9B778B93()
	{
		return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_56980248B8ABC342_METHOD_1_F2D2336B9B778B93_OFFSET))();
	}

	static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode Method_1_E2E6F784373AD65A()
	{
		return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_56980248B8ABC342_METHOD_1_E2E6F784373AD65A_OFFSET))();
	}

	static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode Method_1_1DCE6CC551064A0F(::InControl::InputDeviceClass a1)
	{
		return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)(::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_56980248B8ABC342_METHOD_1_1DCE6CC551064A0F_OFFSET))(a1);
	}

	static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode Method_1_63C4D8813662BF85(::InControl::InputDeviceClass a1)
	{
		return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)(::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_56980248B8ABC342_METHOD_1_63C4D8813662BF85_OFFSET))(a1);
	}

	static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode Method_1_F2D2336B9B778B93_1()
	{
		return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_56980248B8ABC342_METHOD_1_F2D2336B9B778B93_1_OFFSET))();
	}
};
