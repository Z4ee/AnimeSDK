#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/Class_2_5407D3C6832B6AEF_ENavigationState.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24CACD86BEDF8D9B;
class Class_1_C0325AE94F8526BE;
class Class_1_C187E3BA406EEF9F;
class Class_1_C84A84118567060F;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5407D3C6832B6AEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B52BC0)
#define CLASS_2_5407D3C6832B6AEF_GET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x10B54970)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10B53880)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10B54650)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B54C10)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_5AABC89E4BDE7C0F_OFFSET UNITYSDK_OFFSET(0x10B53DF0)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x10B54960)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_72F4966F7A4AB8A7_OFFSET UNITYSDK_OFFSET(0x10B54BA0)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10B54B30)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_94D154AD3C00BF8F_OFFSET UNITYSDK_OFFSET(0x10B52CF0)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x10B54860)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_972F9F2CC17A4649_1_OFFSET UNITYSDK_OFFSET(0x10B54AB0)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_972F9F2CC17A4649_OFFSET UNITYSDK_OFFSET(0x10B54A10)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_AADB639FEBD4D9D7_OFFSET UNITYSDK_OFFSET(0x10B53170)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_BA4A259A1943C1AD_OFFSET UNITYSDK_OFFSET(0x10B546D0)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x10B53C30)
#define CLASS_2_5407D3C6832B6AEF_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0x10B53220)
#define CLASS_2_5407D3C6832B6AEF_SET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x10B54980)
#define CLASS_2_5407D3C6832B6AEF__CTOR_OFFSET UNITYSDK_OFFSET(0x10B52750)
#define CLASS_2_5407D3C6832B6AEF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B54990)

inline static constexpr unsigned int Class_2_5407D3C6832B6AEF_TypeDefinitionIndex = 56196;

class Class_2_5407D3C6832B6AEF : public ::Class_1_6854A6346A56B2FF
{
public:
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_10; // 0x0
	::Class_1_C0325AE94F8526BE* Field_2_3; // 0x48
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_2_1; // 0x50
	::Class_1_24CACD86BEDF8D9B* Field_2_2; // 0x58
	::Class_2_5407D3C6832B6AEF_ENavigationState Field_2_4; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> _LastValidDestination_k__BackingField; // 0x64
	::System::Single Field_2_5; // 0x74
	::System::Single Field_2_8; // 0x78
	::System::Single Field_2_6; // 0x7C
	::UnityEngine::Vector3 Field_2_7; // 0x80

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_94D154AD3C00BF8F(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_94D154AD3C00BF8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_AADB639FEBD4D9D7(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_AADB639FEBD4D9D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6471432079351DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_D6471432079351DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AABC89E4BDE7C0F(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_5AABC89E4BDE7C0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_BA4A259A1943C1AD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_BA4A259A1943C1AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_LastValidDestination()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_GET_LASTVALIDDESTINATION_OFFSET))(this);
	}

	::System::Void set_LastValidDestination(::System::Nullable_1<::UnityEngine::Vector3> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_SET_LASTVALIDDESTINATION_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_972F9F2CC17A4649(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_972F9F2CC17A4649_OFFSET))(this, P0);
	}

	::System::Void Method_2_972F9F2CC17A4649_1(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_972F9F2CC17A4649_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_72F4966F7A4AB8A7(::RPG::GameCore::CharacterInputData* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_72F4966F7A4AB8A7_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5407D3C6832B6AEF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
