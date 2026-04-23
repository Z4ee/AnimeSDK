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

#define CLASS_1_556D7C1A84EB374A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F45090)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8F45480)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8F454E0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x8F45560)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x8F45430)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x8F45160)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_A2862C87E4B9A8B1_OFFSET UNITYSDK_OFFSET(0x8F450E0)
#define CLASS_1_556D7C1A84EB374A_METHOD_1_FC2DF3D8A7ED80C1_OFFSET UNITYSDK_OFFSET(0x8F45260)
#define CLASS_1_556D7C1A84EB374A_TICK_OFFSET UNITYSDK_OFFSET(0x8F453C0)
#define CLASS_1_556D7C1A84EB374A__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F45600)
#define CLASS_1_556D7C1A84EB374A__CTOR_OFFSET UNITYSDK_OFFSET(0x8F45080)

inline static constexpr unsigned int Class_1_556D7C1A84EB374A_TypeDefinitionIndex = 51513;

class Class_1_556D7C1A84EB374A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0x10210);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_556D7C1A84EB374A_TypeDefinitionIndex)->GetStaticField(0x10214);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_E7811A222424F15E* Field_1_6; // 0x10
	::RPG::GameCore::GameEntity* Field_1_5; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_7; // 0x20
	::System::Single Field_1_11; // 0x28
	::Class_1_556D7C1A84EB374A_ETurnDirection Field_1_8; // 0x2C
	::System::Single Field_1_10; // 0x30
	::UnityEngine::Quaternion Field_1_9; // 0x34

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

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_556D7C1A84EB374A_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
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
