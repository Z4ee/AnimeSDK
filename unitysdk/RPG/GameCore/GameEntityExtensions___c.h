#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9525E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA952610)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_0_OFFSET UNITYSDK_OFFSET(0xA952620)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_1_OFFSET UNITYSDK_OFFSET(0xA9526D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_2_OFFSET UNITYSDK_OFFSET(0xA952770)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_3_OFFSET UNITYSDK_OFFSET(0xA952800)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_4_OFFSET UNITYSDK_OFFSET(0xA952960)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_5_OFFSET UNITYSDK_OFFSET(0xA9529F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_6_OFFSET UNITYSDK_OFFSET(0xA952A20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_7_OFFSET UNITYSDK_OFFSET(0xA952BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 46601;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x46B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__84_0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_0_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_1_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_2(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_2_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_3(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_3_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_4(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_4_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_5(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_5_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_6(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_6_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__84_7(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__84_7_OFFSET))(this, entity);
		}
	};
}
