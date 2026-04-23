#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_2FA61DF2EE4D4708.h"

class Class_1_9CCDD9DFB0D3EBBA;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8620D042D602AF2D_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x97B1940)
#define CLASS_2_8620D042D602AF2D_METHOD_2_3DEF4A3376419825_OFFSET UNITYSDK_OFFSET(0x97B1B40)
#define CLASS_2_8620D042D602AF2D_METHOD_2_44BBC94B0FE09175_OFFSET UNITYSDK_OFFSET(0x97B1D70)
#define CLASS_2_8620D042D602AF2D_ONINIT_OFFSET UNITYSDK_OFFSET(0x97B16F0)
#define CLASS_2_8620D042D602AF2D_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x97B1750)
#define CLASS_2_8620D042D602AF2D_TICK_OFFSET UNITYSDK_OFFSET(0x97B1950)
#define CLASS_2_8620D042D602AF2D__CTOR_OFFSET UNITYSDK_OFFSET(0x97B1EC0)
#define CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x97B1F00)
#define CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x97B1F60)
#define CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x97B1FC0)

inline static constexpr unsigned int Class_2_8620D042D602AF2D_TypeDefinitionIndex = 55583;

class Class_2_8620D042D602AF2D : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::Class_1_9CCDD9DFB0D3EBBA*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DEF4A3376419825(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_2FA61DF2EE4D4708 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_2FA61DF2EE4D4708))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_METHOD_2_3DEF4A3376419825_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_44BBC94B0FE09175(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D_METHOD_2_44BBC94B0FE09175_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8620D042D602AF2D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
