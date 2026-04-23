#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_METHOD_3_251DAE82D56C2162_OFFSET UNITYSDK_OFFSET(0x187C6DD0)
#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_METHOD_3_3706CA4FCA14049C_OFFSET UNITYSDK_OFFSET(0x187C7020)
#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x187C6FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterUIDisplay_TypeDefinitionIndex = 22662;

	class ChangeCharacterUIDisplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FromTarget; // 0x20
		::RPG::Client::TextID CharacterName; // 0x28
		::RPG::Client::TextID Introduction; // 0x38
		::System::String* HeadIconPath; // 0x48
		::System::String* RoundIconPath; // 0x50
		::System::String* SideHeadIconPath; // 0x58
		::System::String* SideIconPath; // 0x60
		::System::String* WaitingHeadIconPath; // 0x68
		::System::String* ActionHeadIconPath; // 0x70
		::System::String* ServantMiniIconPath; // 0x78
		::System::String* UltraSkillCutInPrefabPath; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_251DAE82D56C2162(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterUIDisplay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterUIDisplay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_METHOD_3_251DAE82D56C2162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3706CA4FCA14049C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterUIDisplay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_METHOD_3_3706CA4FCA14049C_OFFSET))(a1, a2);
		}
	};
}
