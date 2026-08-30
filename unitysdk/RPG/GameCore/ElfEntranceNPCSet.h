#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfEntranceNPCConfig; }

#define RPG_GAMECORE_ELFENTRANCENPCSET_METHOD_2_DEF186780ED1D1CA_OFFSET UNITYSDK_OFFSET(0x1DB28D00)
#define RPG_GAMECORE_ELFENTRANCENPCSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB28DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceNPCSet_TypeDefinitionIndex = 16020;

	class ElfEntranceNPCSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfEntranceNPCConfig*>* NPCs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DEF186780ED1D1CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEntranceNPCSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEntranceNPCSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET_METHOD_2_DEF186780ED1D1CA_OFFSET))(a1, a2);
		}
	};
}
