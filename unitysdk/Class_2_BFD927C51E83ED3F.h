#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/Class_2_BFD927C51E83ED3F_ENavigationState.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_39EE7F862E4AD59A;
class Class_1_6338FD15AFE99D89;
class Class_1_C0325AE94F8526BE;
class Class_1_C84A84118567060F;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_BFD927C51E83ED3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A1DDF0)
#define CLASS_2_BFD927C51E83ED3F_GET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x17A1FB10)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x17A1EA20)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17A1F7F0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_536B69C9F65457C3_OFFSET UNITYSDK_OFFSET(0x17A1DF10)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_5AABC89E4BDE7C0F_OFFSET UNITYSDK_OFFSET(0x17A1EF90)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x17A1FB00)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_AADB639FEBD4D9D7_OFFSET UNITYSDK_OFFSET(0x17A1E300)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_BA4A259A1943C1AD_OFFSET UNITYSDK_OFFSET(0x17A1F870)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x17A1FA00)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x17A1EDD0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0x17A1E3B0)
#define CLASS_2_BFD927C51E83ED3F_SET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0x17A1FB20)
#define CLASS_2_BFD927C51E83ED3F__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1D9B0)

inline static constexpr unsigned int Class_2_BFD927C51E83ED3F_TypeDefinitionIndex = 65727;

class Class_2_BFD927C51E83ED3F : public ::Class_1_6854A6346A56B2FF
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::Class_1_C0325AE94F8526BE* Field_2_2; // 0x48
	::Class_1_39EE7F862E4AD59A* Field_2_3; // 0x50
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_2_4; // 0x58
	::System::Single Field_2_5; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> _LastValidDestination_k__BackingField; // 0x64
	::System::Single Field_2_7; // 0x74
	::UnityEngine::Vector3 Field_2_8; // 0x78
	::System::Single Field_2_9; // 0x84
	::Class_2_BFD927C51E83ED3F_ENavigationState Field_2_10; // 0x88

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_536B69C9F65457C3(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_536B69C9F65457C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_AADB639FEBD4D9D7(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_AADB639FEBD4D9D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6471432079351DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_D6471432079351DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AABC89E4BDE7C0F(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_5AABC89E4BDE7C0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_BA4A259A1943C1AD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_BA4A259A1943C1AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_LastValidDestination()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_GET_LASTVALIDDESTINATION_OFFSET))(this);
	}

	::System::Void set_LastValidDestination(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_SET_LASTVALIDDESTINATION_OFFSET))(this, a1);
	}
};
