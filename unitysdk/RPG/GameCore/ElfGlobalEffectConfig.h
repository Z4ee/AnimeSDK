#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_METHOD_2_44ED9DD5C0C7B62B_OFFSET UNITYSDK_OFFSET(0x1BB37310)
#define RPG_GAMECORE_ELFGLOBALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB37440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfGlobalEffectConfig_TypeDefinitionIndex = 17723;

	class ElfGlobalEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SmokeEffectFood; // 0x10
		::System::String* SmokeEffectBuild; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFGLOBALEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44ED9DD5C0C7B62B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfGlobalEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfGlobalEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_METHOD_2_44ED9DD5C0C7B62B_OFFSET))(a1, a2);
		}
	};
}
