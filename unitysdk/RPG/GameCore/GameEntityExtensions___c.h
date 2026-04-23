#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB69E450)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB69E480)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_0_OFFSET UNITYSDK_OFFSET(0xB69E490)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_1_OFFSET UNITYSDK_OFFSET(0xB69E540)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_2_OFFSET UNITYSDK_OFFSET(0xB69E5E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_3_OFFSET UNITYSDK_OFFSET(0xB69E610)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_4_OFFSET UNITYSDK_OFFSET(0xB69E680)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_5_OFFSET UNITYSDK_OFFSET(0xB69E6B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_6_OFFSET UNITYSDK_OFFSET(0xB69E6E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_7_OFFSET UNITYSDK_OFFSET(0xB69E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 53292;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x50B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__97_0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_0_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_1_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_2(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_2_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_3(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_3_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_4(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_4_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_5(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_5_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_6(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_6_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__97_7(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__97_7_OFFSET))(this, entity);
		}
	};
}
