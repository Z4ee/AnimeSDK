#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfSelectEventTalk; }
namespace RPG::GameCore { class ElfSpecialEventEffect; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_METHOD_2_E271AEB8D469ACF9_OFFSET UNITYSDK_OFFSET(0x1D05C470)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventSelectResultItem_TypeDefinitionIndex = 18277;

	class ElfSpecialEventSelectResultItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfSelectEventTalk*>* NextTalkIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfSpecialEventEffect*>* EventEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E271AEB8D469ACF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventSelectResultItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventSelectResultItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_METHOD_2_E271AEB8D469ACF9_OFFSET))(a1, a2);
		}
	};
}
