#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_6CD26B7818810531_OFFSET UNITYSDK_OFFSET(0x1BB18400)
#define RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_D9BA6F744648EAD4_OFFSET UNITYSDK_OFFSET(0x1BB183B0)
#define RPG_GAMECORE_DISABLECHARACTERVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB183F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableCharacterVO_TypeDefinitionIndex = 22080;

	class DisableCharacterVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AllType; // 0x18
		::RPG::GameCore::TargetEvaluator* SpecificTarget; // 0x20
		::System::Boolean RestoreVO; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterVOType>* VOTypes; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9BA6F744648EAD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableCharacterVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableCharacterVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_D9BA6F744648EAD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CD26B7818810531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableCharacterVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_6CD26B7818810531_OFFSET))(a1, a2);
		}
	};
}
