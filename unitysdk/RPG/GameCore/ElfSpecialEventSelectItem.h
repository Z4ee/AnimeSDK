#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_METHOD_2_30700088C3699C44_OFFSET UNITYSDK_OFFSET(0x196DDC30)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x196DDEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventSelectItem_TypeDefinitionIndex = 17587;

	class ElfSpecialEventSelectItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 SelectNameTalkID; // 0x20
		::RPG::GameCore::ElfSpecialEventSelectResultItem* EventResult; // 0x28
		::Il2CppArray<::System::String*>* ElfBuffList; // 0x30
		::System::UInt32 RewardID; // 0x38
		::Il2CppArray<::System::UInt32>* SubmissionIDList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_30700088C3699C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventSelectItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventSelectItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_METHOD_2_30700088C3699C44_OFFSET))(a1, a2);
		}
	};
}
