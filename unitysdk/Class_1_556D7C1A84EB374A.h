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

#define CLASS_1_556D7C1A84EB374A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A702A0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15A70690)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x15A706F0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15A70770)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x15A70640)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x15A70370)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_A2862C87E4B9A8B1_OFFSET UNITYSDK_OFFSET(0x15A702F0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_FC2DF3D8A7ED80C1_OFFSET UNITYSDK_OFFSET(0x15A70470)
#define CLASS_1_556D7C1A84EB374A_TICK_OFFSET UNITYSDK_OFFSET(0x15A705D0)
#define CLASS_1_556D7C1A84EB374A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A70810)
#define CLASS_1_556D7C1A84EB374A__CTOR_OFFSET UNITYSDK_OFFSET(0x15A70290)

inline static constexpr unsigned int Class_1_556D7C1A84EB374A_TypeDefinitionIndex = 56047;

class Class_1_556D7C1A84EB374A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EGMAKJECKHA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0x13000);
	}
	static ::System::Int32* StaticGet_IHJJMJJINCC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0x13004);
	}
	// static const ::System::Single EBFKPGGLALN; // 0x0
	// static const ::System::String* NGLMDDFKGEA; // 0x0
	// static const ::System::String* BNLLFHNNMLL; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::Class_1_E7811A222424F15E* ONBOGBCKHDC; // 0x18
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
	::Class_1_556D7C1A84EB374A_ETurnDirection BGNACBGBMHG; // 0x28
	::UnityEngine::Quaternion MBOJLOPIEEK; // 0x2C
	::System::Single JENOIFAFLLN; // 0x3C
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

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
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
