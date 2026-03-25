#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_50060BC866C6F5C7_OFFSET UNITYSDK_OFFSET(0x17698A10)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_AFDCB327197242CD_OFFSET UNITYSDK_OFFSET(0x1768AAC0)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1768AA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfPlayEntityBehavior_TypeDefinitionIndex = 19720;

	class ST_Side_ElfPlayEntityBehavior : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* BehaviorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_50060BC866C6F5C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_50060BC866C6F5C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFDCB327197242CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_METHOD_4_AFDCB327197242CD_OFFSET))(a1, a2);
		}
	};
}
