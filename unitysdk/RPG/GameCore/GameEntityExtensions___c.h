#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE0AE40)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE0AE70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0xCE0AE80)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_1_OFFSET UNITYSDK_OFFSET(0xCE0AF30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_2_OFFSET UNITYSDK_OFFSET(0xCE0AFD0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_3_OFFSET UNITYSDK_OFFSET(0xCE0B000)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_4_OFFSET UNITYSDK_OFFSET(0xCE0B070)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_5_OFFSET UNITYSDK_OFFSET(0xCE0B0A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_6_OFFSET UNITYSDK_OFFSET(0xCE0B0D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_7_OFFSET UNITYSDK_OFFSET(0xCE0B1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 54005;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x68160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__98_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_0_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_5(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_6(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__98_7(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__98_7_OFFSET))(this, a1);
		}
	};
}
