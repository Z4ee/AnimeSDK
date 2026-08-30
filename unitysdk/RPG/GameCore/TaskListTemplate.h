#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TASKLISTTEMPLATE_METHOD_2_5F89CD15B2EA6C96_OFFSET UNITYSDK_OFFSET(0x1D5C18C0)
#define RPG_GAMECORE_TASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C1A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskListTemplate_TypeDefinitionIndex = 15470;

	class TaskListTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::Class_1_1C30CE192ABE4C54* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKLISTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F89CD15B2EA6C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKLISTTEMPLATE_METHOD_2_5F89CD15B2EA6C96_OFFSET))(a1, a2);
		}
	};
}
