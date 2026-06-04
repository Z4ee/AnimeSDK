#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_50D1E4EE64E85756_OFFSET UNITYSDK_OFFSET(0x19A26A00)
#define RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_53F5C3B025D534DA_OFFSET UNITYSDK_OFFSET(0x19A26980)
#define RPG_GAMECORE_PLAYOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A269D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayOptionTalk_TypeDefinitionIndex = 19706;

	class PlayOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::System::Boolean HideSelected; // 0x20
		::System::Boolean HideButtonAuto; // 0x21
		::System::Boolean TriggerStringWhenAllSelected; // 0x22
		::System::String* TriggerString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53F5C3B025D534DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_53F5C3B025D534DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50D1E4EE64E85756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_50D1E4EE64E85756_OFFSET))(a1, a2);
		}
	};
}
