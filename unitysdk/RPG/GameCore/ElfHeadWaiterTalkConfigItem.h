#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_METHOD_2_C7784405F8495958_OFFSET UNITYSDK_OFFSET(0x1718F0A0)
#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1718F1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfHeadWaiterTalkConfigItem_TypeDefinitionIndex = 16939;

	class ElfHeadWaiterTalkConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::Il2CppArray<::System::String*>* BehaviorNameList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C7784405F8495958(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfHeadWaiterTalkConfigItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfHeadWaiterTalkConfigItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_METHOD_2_C7784405F8495958_OFFSET))(a1, a2);
		}
	};
}
