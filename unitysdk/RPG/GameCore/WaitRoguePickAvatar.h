#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEPICKAVATAR_METHOD_3_8A565AD67D8BB032_OFFSET UNITYSDK_OFFSET(0x17902C30)
#define RPG_GAMECORE_WAITROGUEPICKAVATAR_METHOD_3_E183080DA2038A32_OFFSET UNITYSDK_OFFSET(0x17902CC0)
#define RPG_GAMECORE_WAITROGUEPICKAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17902C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRoguePickAvatar_TypeDefinitionIndex = 18786;

	class WaitRoguePickAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A565AD67D8BB032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRoguePickAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRoguePickAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR_METHOD_3_8A565AD67D8BB032_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E183080DA2038A32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRoguePickAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRoguePickAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR_METHOD_3_E183080DA2038A32_OFFSET))(a1, a2);
		}
	};
}
