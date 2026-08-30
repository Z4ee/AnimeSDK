#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18422E60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18422E90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_0_OFFSET UNITYSDK_OFFSET(0x18422EA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_1_OFFSET UNITYSDK_OFFSET(0x18422F50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_2_OFFSET UNITYSDK_OFFSET(0x18422FF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_3_OFFSET UNITYSDK_OFFSET(0x18423020)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_4_OFFSET UNITYSDK_OFFSET(0x18423090)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_5_OFFSET UNITYSDK_OFFSET(0x184230C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_6_OFFSET UNITYSDK_OFFSET(0x184230F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_7_OFFSET UNITYSDK_OFFSET(0x184231C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 57948;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x33E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__101_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_0_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_5(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_6(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_7(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_7_OFFSET))(this, a1);
		}
	};
}
