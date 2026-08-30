#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfEntranceAnchorConfig; }
namespace RPG::GameCore { class ElfEntranceNPCSet; }

#define RPG_GAMECORE_ELFENTRANCEOBJECTS_METHOD_2_C578BCD5B95892BE_OFFSET UNITYSDK_OFFSET(0x1DB28E00)
#define RPG_GAMECORE_ELFENTRANCEOBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB28FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceObjects_TypeDefinitionIndex = 16021;

	class ElfEntranceObjects : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfEntranceAnchorConfig* SingleAvatarAnchor; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfEntranceAnchorConfig*>* MultiAvatarAnchor; // 0x18
		::Il2CppArray<::RPG::GameCore::ElfEntranceAnchorConfig*>* ElfAnchors; // 0x20
		::RPG::GameCore::ElfEntranceNPCSet* ElfSet; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEOBJECTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C578BCD5B95892BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEntranceObjects*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEntranceObjects*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEOBJECTS_METHOD_2_C578BCD5B95892BE_OFFSET))(a1, a2);
		}
	};
}
