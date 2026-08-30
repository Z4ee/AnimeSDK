#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AutoBubbleConfig; }
namespace RPG::GameCore { class NoteComboConfig; }
namespace RPG::GameCore { class NoteConfig; }

#define RPG_GAMECORE_NOTEGROUPCONFIG_METHOD_2_388FABFE3C1182FC_OFFSET UNITYSDK_OFFSET(0x1CE8FF20)
#define RPG_GAMECORE_NOTEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE90250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteGroupConfig_TypeDefinitionIndex = 16754;

	class NoteGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartTime; // 0x10
		::System::Single EndTime; // 0x14
		::RPG::GameCore::AutoBubbleConfig* AutoBubble; // 0x18
		::System::Boolean TutorialScore; // 0x20
		::System::Boolean IgnoreTutorialLoop; // 0x21
		::System::Boolean IsEmpty; // 0x22
		::Il2CppArray<::RPG::GameCore::NoteComboConfig*>* NoteComboList; // 0x28
		::Il2CppArray<::RPG::GameCore::NoteConfig*>* NoteList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_388FABFE3C1182FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTEGROUPCONFIG_METHOD_2_388FABFE3C1182FC_OFFSET))(a1, a2);
		}
	};
}
