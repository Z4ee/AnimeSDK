#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/Class_2_2A5945F4FE09F8EC_ENavigationState.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24CACD86BEDF8D9B;
class Class_1_C0325AE94F8526BE;
class Class_1_C187E3BA406EEF9F;
class Class_1_C84A84118567060F;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_2A5945F4FE09F8EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B85AD0)
#define CLASS_2_2A5945F4FE09F8EC_GET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x11B87840)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_167B853B3499B8A6_OFFSET UNITYSDK_OFFSET(0x11B85C00)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x11B86760)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11B87520)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11B87AE0)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_5AABC89E4BDE7C0F_OFFSET UNITYSDK_OFFSET(0x11B86CD0)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x11B87830)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_72F4966F7A4AB8A7_OFFSET UNITYSDK_OFFSET(0x11B87A70)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11B87A00)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x11B87730)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_972F9F2CC17A4649_1_OFFSET UNITYSDK_OFFSET(0x11B87980)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_972F9F2CC17A4649_OFFSET UNITYSDK_OFFSET(0x11B878E0)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_AADB639FEBD4D9D7_OFFSET UNITYSDK_OFFSET(0x11B86050)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_BA4A259A1943C1AD_OFFSET UNITYSDK_OFFSET(0x11B875A0)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x11B86B10)
#define CLASS_2_2A5945F4FE09F8EC_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0x11B86100)
#define CLASS_2_2A5945F4FE09F8EC_SET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x11B87850)
#define CLASS_2_2A5945F4FE09F8EC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B85660)
#define CLASS_2_2A5945F4FE09F8EC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B87860)

inline static constexpr unsigned int Class_2_2A5945F4FE09F8EC_TypeDefinitionIndex = 63439;

class Class_2_2A5945F4FE09F8EC : public ::Class_1_6854A6346A56B2FF
{
public:
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_10; // 0x0
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_2_1; // 0x48
	::Class_1_24CACD86BEDF8D9B* Field_2_2; // 0x50
	::Class_1_C0325AE94F8526BE* Field_2_3; // 0x58
	::System::Nullable_1<::UnityEngine::Vector3> _LastValidDestination_k__BackingField; // 0x60
	::System::Single Field_2_8; // 0x70
	::System::Single Field_2_5; // 0x74
	::UnityEngine::Vector3 Field_2_7; // 0x78
	::System::Single Field_2_6; // 0x84
	::Class_2_2A5945F4FE09F8EC_ENavigationState Field_2_4; // 0x88

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_167B853B3499B8A6(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_167B853B3499B8A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_AADB639FEBD4D9D7(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_AADB639FEBD4D9D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6471432079351DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_D6471432079351DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AABC89E4BDE7C0F(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_5AABC89E4BDE7C0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_BA4A259A1943C1AD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_BA4A259A1943C1AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_LastValidDestination()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_GET_LASTVALIDDESTINATION_OFFSET))(this);
	}

	::System::Void set_LastValidDestination(::System::Nullable_1<::UnityEngine::Vector3> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_SET_LASTVALIDDESTINATION_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_972F9F2CC17A4649(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_972F9F2CC17A4649_OFFSET))(this, P0);
	}

	::System::Void Method_2_972F9F2CC17A4649_1(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_972F9F2CC17A4649_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_72F4966F7A4AB8A7(::RPG::GameCore::CharacterInputData* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_72F4966F7A4AB8A7_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A5945F4FE09F8EC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
