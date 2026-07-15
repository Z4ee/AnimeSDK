#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_0B97624EA2BF3959_1;
class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET UNITYSDK_OFFSET(0x19CCA6A0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_954B51D4A0BD1B4E_OFFSET UNITYSDK_OFFSET(0x19CCA660)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_BA6B235D29070E88_OFFSET UNITYSDK_OFFSET(0x19CCA840)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_C0C3BA47C7E0398F_OFFSET UNITYSDK_OFFSET(0x19CCA810)
#define RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCA690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterDie_TypeDefinitionIndex = 22595;

	class ByCheckMonsterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::Class_1_0B97624EA2BF3959_1* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_954B51D4A0BD1B4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_954B51D4A0BD1B4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79C7E717A254DB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0C3BA47C7E0398F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_C0C3BA47C7E0398F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA6B235D29070E88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_BA6B235D29070E88_OFFSET))(a1, a2);
		}
	};
}
