#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_0B97624EA2BF3959_1;
class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_0F6567A429D89661_OFFSET UNITYSDK_OFFSET(0x194FF3D0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_3A46AA52BFA648DA_OFFSET UNITYSDK_OFFSET(0x194FF610)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET UNITYSDK_OFFSET(0x194FF4A0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_AFCE151283A35846_OFFSET UNITYSDK_OFFSET(0x194FF690)
#define RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x194FF450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterDie_TypeDefinitionIndex = 22158;

	class ByCheckMonsterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::Class_1_0B97624EA2BF3959_1* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F6567A429D89661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_0F6567A429D89661_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79C7E717A254DB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A46AA52BFA648DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_3A46AA52BFA648DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFCE151283A35846(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_AFCE151283A35846_OFFSET))(a1, a2);
		}
	};
}
