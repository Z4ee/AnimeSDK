#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_AFDCB327197242CD_OFFSET UNITYSDK_OFFSET(0x1B7888E0)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_F02DB1F0B012000E_OFFSET UNITYSDK_OFFSET(0x1B7888A0)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7888D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfPlayEntityBehavior_TypeDefinitionIndex = 20740;

	class ST_Side_ElfPlayEntityBehavior : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* BehaviorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F02DB1F0B012000E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_F02DB1F0B012000E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFDCB327197242CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_AFDCB327197242CD_OFFSET))(a1, a2);
		}
	};
}
