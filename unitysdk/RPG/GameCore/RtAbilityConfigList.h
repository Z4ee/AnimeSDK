#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTABILITYCONFIGLIST_METHOD_2_52F16213835172D9_OFFSET UNITYSDK_OFFSET(0x18D82D50)
#define RPG_GAMECORE_RTABILITYCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18D82F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityConfigList_TypeDefinitionIndex = 16755;

	class RtAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* GlobalModifiers; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* GlobalTemplates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_52F16213835172D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIGLIST_METHOD_2_52F16213835172D9_OFFSET))(a1, a2);
		}
	};
}
