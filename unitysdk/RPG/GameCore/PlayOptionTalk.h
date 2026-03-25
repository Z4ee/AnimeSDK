#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_A2AF3F66BE742CDD_OFFSET UNITYSDK_OFFSET(0x174C43E0)
#define RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_ABC843CFA50EFCDC_OFFSET UNITYSDK_OFFSET(0x174C4460)
#define RPG_GAMECORE_PLAYOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x174C4430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayOptionTalk_TypeDefinitionIndex = 19177;

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

		static ::System::Void Method_3_A2AF3F66BE742CDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_A2AF3F66BE742CDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABC843CFA50EFCDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_METHOD_3_ABC843CFA50EFCDC_OFFSET))(a1, a2);
		}
	};
}
