#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_556D7C1A84EB374A_ETurnDirection.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_556D7C1A84EB374A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D82410)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15D82800)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x15D82860)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15D828E0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x15D827B0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x15D824E0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_A2862C87E4B9A8B1_OFFSET UNITYSDK_OFFSET(0x15D82460)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_FC2DF3D8A7ED80C1_OFFSET UNITYSDK_OFFSET(0x15D825E0)
#define CLASS_1_556D7C1A84EB374A_TICK_OFFSET UNITYSDK_OFFSET(0x15D82740)
#define CLASS_1_556D7C1A84EB374A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D82980)
#define CLASS_1_556D7C1A84EB374A__CTOR_OFFSET UNITYSDK_OFFSET(0x15D82400)

inline static constexpr unsigned int Class_1_556D7C1A84EB374A_TypeDefinitionIndex = 55859;

class Class_1_556D7C1A84EB374A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EGMAKJECKHA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0xA1A0);
	}
	static ::System::Int32* StaticGet_IHJJMJJINCC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0xA1A4);
	}
	// static const ::System::Single EBFKPGGLALN; // 0x0
	// static const ::System::String* NGLMDDFKGEA; // 0x0
	// static const ::System::String* BNLLFHNNMLL; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
	::Class_1_E7811A222424F15E* ONBOGBCKHDC; // 0x20
	::UnityEngine::Quaternion MBOJLOPIEEK; // 0x28
	::System::Single JENOIFAFLLN; // 0x38
	::Class_1_556D7C1A84EB374A_ETurnDirection BGNACBGBMHG; // 0x3C
	::System::Single ALBEHEENGLC; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_A2862C87E4B9A8B1()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_A2862C87E4B9A8B1_OFFSET))(this);
	}

	::System::Void Method_1_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_926A87EF7B2C87F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC2DF3D8A7ED80C1(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_FC2DF3D8A7ED80C1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}
};
