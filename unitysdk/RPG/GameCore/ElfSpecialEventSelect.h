#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfSelectEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfSelectEventTalk; }
namespace RPG::GameCore { class ElfSpecialEventSelectItem; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECT_METHOD_2_6F58FB8C584568A3_OFFSET UNITYSDK_OFFSET(0x1D7B6870)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B6F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventSelect_TypeDefinitionIndex = 18276;

	class ElfSpecialEventSelect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventTip; // 0x10
		::RPG::GameCore::ElfSelectEventType Type; // 0x18
		::System::UInt32 TagID; // 0x1C
		::System::UInt32 MaterialID; // 0x20
		::System::Boolean IsExpensive; // 0x24
		::RPG::GameCore::ElfSpecialEventSelectResultItem* GoodResult; // 0x28
		::RPG::GameCore::ElfSpecialEventSelectResultItem* BadResult; // 0x30
		::Il2CppArray<::RPG::GameCore::ElfSpecialEventSelectItem*>* SelectList; // 0x38
		::Il2CppArray<::RPG::GameCore::ElfSelectEventTalk*>* TalkIDList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F58FB8C584568A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECT_METHOD_2_6F58FB8C584568A3_OFFSET))(a1, a2);
		}
	};
}
