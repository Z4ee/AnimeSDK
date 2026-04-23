#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_1_418DB03A1CEC7DD0;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5FFC2A7EE4913D34_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x124A1360)
#define CLASS_2_5FFC2A7EE4913D34_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x124A13D0)
#define CLASS_2_5FFC2A7EE4913D34_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x124A0D00)
#define CLASS_2_5FFC2A7EE4913D34_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x124A13C0)
#define CLASS_2_5FFC2A7EE4913D34_METHOD_2_ED8DEF1B3CE0066D_OFFSET UNITYSDK_OFFSET(0x124A0D50)
#define CLASS_2_5FFC2A7EE4913D34__CCTOR_OFFSET UNITYSDK_OFFSET(0x124A1370)
#define CLASS_2_5FFC2A7EE4913D34__CTOR_OFFSET UNITYSDK_OFFSET(0x124A0CA0)

inline static constexpr unsigned int Class_2_5FFC2A7EE4913D34_TypeDefinitionIndex = 52575;

class Class_2_5FFC2A7EE4913D34 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FFC2A7EE4913D34_TypeDefinitionIndex)->GetStaticField(0x10340);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FFC2A7EE4913D34_TypeDefinitionIndex)->GetStaticField(0x10344);
	}
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x68
	::Class_1_418DB03A1CEC7DD0* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34__CCTOR_OFFSET))();
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_ED8DEF1B3CE0066D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34_METHOD_2_ED8DEF1B3CE0066D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FFC2A7EE4913D34_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}
};
