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

#define CLASS_2_BFD927C51E83ED3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB809160)
#define CLASS_2_BFD927C51E83ED3F_GET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0xB80AEC0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xB809DC0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB80AB90)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_5AABC89E4BDE7C0F_OFFSET UNITYSDK_OFFSET(0xB80A330)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0xB80AEB0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_AADB639FEBD4D9D7_OFFSET UNITYSDK_OFFSET(0xB8096B0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_BA4A259A1943C1AD_OFFSET UNITYSDK_OFFSET(0xB80AC10)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xB80ADA0)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB80A170)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_C8BA1BD99D2C3EE8_OFFSET UNITYSDK_OFFSET(0xB809280)
#define CLASS_2_BFD927C51E83ED3F_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0xB809760)
#define CLASS_2_BFD927C51E83ED3F_SET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0xB80AED0)
#define CLASS_2_BFD927C51E83ED3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB808D20)

inline static constexpr unsigned int Class_2_BFD927C51E83ED3F_TypeDefinitionIndex = 68798;

class Class_2_BFD927C51E83ED3F : public ::Class_1_6854A6346A56B2FF
{
public:
	// static const ::System::Single BBKPHCCHIOF; // 0x0
	// static const ::System::Single KCNCCEKKFKI; // 0x0
	::Class_1_39EE7F862E4AD59A* LFLNILJKBGM; // 0x48
	::Class_1_C0325AE94F8526BE* KGGMLFMPJPE; // 0x50
	::Il2CppArray<::Class_1_C84A84118567060F*>* AHBBDNBKLAL; // 0x58
	::System::Single CEBNDGNFDKP; // 0x60
	::System::Single GIPJINEJCAN; // 0x64
	::System::Single AMKMOMGBFBN; // 0x68
	::System::Nullable_1<::UnityEngine::Vector3> _LastValidDestination_k__BackingField; // 0x6C
	::UnityEngine::Vector3 GOAKJGJDALN; // 0x7C
	::Class_2_BFD927C51E83ED3F_ENavigationState FPIHDGPCHPK; // 0x88

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C8BA1BD99D2C3EE8(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_BFD927C51E83ED3F_METHOD_2_C8BA1BD99D2C3EE8_OFFSET))(this, a1);
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
