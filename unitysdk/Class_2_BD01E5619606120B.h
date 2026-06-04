#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_2FA61DF2EE4D4708.h"

class Class_1_9CCDD9DFB0D3EBBA;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BD01E5619606120B_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x141C5730)
#define CLASS_2_BD01E5619606120B_METHOD_2_BD18991ACFE703D6_OFFSET UNITYSDK_OFFSET(0x141C5950)
#define CLASS_2_BD01E5619606120B_METHOD_2_E30A0CB4AE5808EA_OFFSET UNITYSDK_OFFSET(0x141C5BC0)
#define CLASS_2_BD01E5619606120B_ONINIT_OFFSET UNITYSDK_OFFSET(0x141C5500)
#define CLASS_2_BD01E5619606120B_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x141C5560)
#define CLASS_2_BD01E5619606120B_TICK_OFFSET UNITYSDK_OFFSET(0x141C5740)
#define CLASS_2_BD01E5619606120B__CTOR_OFFSET UNITYSDK_OFFSET(0x141C5D10)
#define CLASS_2_BD01E5619606120B___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x141C5D50)
#define CLASS_2_BD01E5619606120B___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x141C5DB0)
#define CLASS_2_BD01E5619606120B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x141C5E10)

inline static constexpr unsigned int Class_2_BD01E5619606120B_TypeDefinitionIndex = 56334;

class Class_2_BD01E5619606120B : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::Class_1_9CCDD9DFB0D3EBBA*>* Field_2_0; // 0x20

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

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD01E5619606120B___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
