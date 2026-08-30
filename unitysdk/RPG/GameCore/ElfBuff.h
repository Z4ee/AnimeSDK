#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace System { class String; }

#define RPG_GAMECORE_ELFBUFF_METHOD_2_D89B9C7FB3EC4A2C_OFFSET UNITYSDK_OFFSET(0x1D057920)
#define RPG_GAMECORE_ELFBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D057BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBuff_TypeDefinitionIndex = 18270;

	class ElfBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfTargetType TargetType; // 0x10
		::RPG::GameCore::LittleGameEntityType LittleGameEntityType; // 0x14
		::System::Single Duration; // 0x18
		::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* PropertyModifiers; // 0x20
		::Il2CppArray<::System::String*>* BuffEffects; // 0x28
		::Il2CppArray<::System::String*>* AudioEffects; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D89B9C7FB3EC4A2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFF_METHOD_2_D89B9C7FB3EC4A2C_OFFSET))(a1, a2);
		}
	};
}
