#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ABILITYCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x16E94A90)
#define RPG_GAMECORE_ABILITYCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E94870)
#define RPG_GAMECORE_ABILITYCONFIG_GETTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x16E94D70)
#define RPG_GAMECORE_ABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E94A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityConfig_TypeDefinitionIndex = 14339;

	class AbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetConfig* TargetInfo; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAdd; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRemove; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x30
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* TaskListTemplate; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* _TaskListTemplatesMap; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AbilityConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AbilityConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}

		::RPG::GameCore::TaskListTemplate* GetTaskListTemplate(::System::String* name)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_GETTASKLISTTEMPLATE_OFFSET))(this, name);
		}
	};
}
