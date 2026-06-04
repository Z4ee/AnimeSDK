#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_METHOD_2_3C72CDA77989E100_OFFSET UNITYSDK_OFFSET(0x196D8370)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_METHOD_2_ACBFF3E49E74258D_OFFSET UNITYSDK_OFFSET(0x196D84F0)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x196D84E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateContentItem_TypeDefinitionIndex = 17596;

	class ElfBehaviorStateContentItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Chance; // 0x10
		::System::Single MinDelay; // 0x14
		::System::Single MaxDelay; // 0x18
		::System::String* Content; // 0x20
		::System::Single Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3C72CDA77989E100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateContentItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateContentItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_METHOD_2_3C72CDA77989E100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_ACBFF3E49E74258D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_METHOD_2_ACBFF3E49E74258D_OFFSET))(a1, a2);
		}
	};
}
