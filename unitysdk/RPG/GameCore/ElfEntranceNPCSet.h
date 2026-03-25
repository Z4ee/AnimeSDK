#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfEntranceNPCConfig; }

#define RPG_GAMECORE_ELFENTRANCENPCSET_METHOD_2_90C9C759AAA9B77F_OFFSET UNITYSDK_OFFSET(0x1718E2E0)
#define RPG_GAMECORE_ELFENTRANCENPCSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1718E3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceNPCSet_TypeDefinitionIndex = 14854;

	class ElfEntranceNPCSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfEntranceNPCConfig*>* NPCs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_90C9C759AAA9B77F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEntranceNPCSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEntranceNPCSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET_METHOD_2_90C9C759AAA9B77F_OFFSET))(a1, a2);
		}
	};
}
