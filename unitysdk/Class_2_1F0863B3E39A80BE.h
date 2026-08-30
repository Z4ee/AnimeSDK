#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_1_418DB03A1CEC7DD0;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1F0863B3E39A80BE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x15CBE1D0)
#define CLASS_2_1F0863B3E39A80BE_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x15CBDB60)
#define CLASS_2_1F0863B3E39A80BE_METHOD_2_ED8DEF1B3CE0066D_OFFSET UNITYSDK_OFFSET(0x15CBDBB0)
#define CLASS_2_1F0863B3E39A80BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CBE1E0)
#define CLASS_2_1F0863B3E39A80BE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBDB00)

inline static constexpr unsigned int Class_2_1F0863B3E39A80BE_TypeDefinitionIndex = 57211;

class Class_2_1F0863B3E39A80BE : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_EEFFFMLAANC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1F0863B3E39A80BE_TypeDefinitionIndex)->GetStaticField(0x11DF0);
	}
	static ::System::Int32* StaticGet_GFHGDAAIKEL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1F0863B3E39A80BE_TypeDefinitionIndex)->GetStaticField(0x11DF4);
	}
	::Class_1_418DB03A1CEC7DD0* KCIMDDOEHJE; // 0x68
	::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1F0863B3E39A80BE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1F0863B3E39A80BE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0863B3E39A80BE_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_ED8DEF1B3CE0066D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0863B3E39A80BE_METHOD_2_ED8DEF1B3CE0066D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0863B3E39A80BE_GET_FLAG_OFFSET))(this);
	}
};
