#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_STARFIGHTLEVELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE11E3E0)
#define RPG_CLIENT_STARFIGHTLEVELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE11E420)
#define RPG_CLIENT_STARFIGHTLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xE11E430)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightLevelData___c_TypeDefinitionIndex = 67983;

	class StarFightLevelData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(StarFightLevelData___c_TypeDefinitionIndex)->GetStaticField(0x6F8C0);
		}
		static ::RPG::Client::StarFightLevelData___c** StaticGet___9()
		{
			return (::RPG::Client::StarFightLevelData___c**)Il2CppClass::FromTypeDefinitionIndex(StarFightLevelData___c_TypeDefinitionIndex)->GetStaticField(0x6F8C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMonsterData_b__1_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
