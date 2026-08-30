#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfSpecialEventEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTEFFECT_METHOD_2_3380F9C49780A535_OFFSET UNITYSDK_OFFSET(0x1D05C260)
#define RPG_GAMECORE_ELFSPECIALEVENTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventEffect_TypeDefinitionIndex = 18281;

	class ElfSpecialEventEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfSpecialEventEffectType EffectType; // 0x10
		::Il2CppArray<::System::String*>* ElfBuffList; // 0x18
		::System::UInt32 RewardID; // 0x20
		::Il2CppArray<::System::UInt32>* SubmissionIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3380F9C49780A535(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTEFFECT_METHOD_2_3380F9C49780A535_OFFSET))(a1, a2);
		}
	};
}
