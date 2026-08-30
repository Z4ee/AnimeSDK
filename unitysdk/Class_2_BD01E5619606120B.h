#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/Struct_2_2FA61DF2EE4D4708.h"

class Class_1_9CCDD9DFB0D3EBBA;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BD01E5619606120B_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x160F5BE0)
#define CLASS_2_BD01E5619606120B_METHOD_2_BD18991ACFE703D6_OFFSET UNITYSDK_OFFSET(0x160F5E00)
#define CLASS_2_BD01E5619606120B_METHOD_2_E30A0CB4AE5808EA_OFFSET UNITYSDK_OFFSET(0x160F6070)
#define CLASS_2_BD01E5619606120B_ONINIT_OFFSET UNITYSDK_OFFSET(0x160F59B0)
#define CLASS_2_BD01E5619606120B_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x160F5A10)
#define CLASS_2_BD01E5619606120B_TICK_OFFSET UNITYSDK_OFFSET(0x160F5BF0)
#define CLASS_2_BD01E5619606120B__CTOR_OFFSET UNITYSDK_OFFSET(0x160F61C0)

inline static constexpr unsigned int Class_2_BD01E5619606120B_TypeDefinitionIndex = 60390;

class Class_2_BD01E5619606120B : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Collections::Generic::List_1<::Class_1_9CCDD9DFB0D3EBBA*>* JOLKBOIGOII; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD18991ACFE703D6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_2FA61DF2EE4D4708 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_2FA61DF2EE4D4708))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_METHOD_2_BD18991ACFE703D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E30A0CB4AE5808EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B_METHOD_2_E30A0CB4AE5808EA_OFFSET))(this, a1);
	}
};
