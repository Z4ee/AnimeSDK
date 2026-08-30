#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_METHOD_3_028648D9E6964C35_OFFSET UNITYSDK_OFFSET(0x1D602E40)
#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_METHOD_3_E1AF5C322BDD12B2_OFFSET UNITYSDK_OFFSET(0x1D602E00)
#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D602E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerParallelTaskListTemplate_TypeDefinitionIndex = 23044;

	class TriggerParallelTaskListTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromGlobal; // 0x18
		::Il2CppArray<::RPG::GameCore::ParallelConfigForTaskListTemplate*>* Templates; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* TemplateParamSequences; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1AF5C322BDD12B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelTaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_METHOD_3_E1AF5C322BDD12B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_028648D9E6964C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_METHOD_3_028648D9E6964C35_OFFSET))(a1, a2);
		}
	};
}
