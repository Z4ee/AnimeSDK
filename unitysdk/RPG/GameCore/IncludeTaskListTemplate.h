#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCLUDETASKLISTTEMPLATE_METHOD_3_1636B4B90666F983_OFFSET UNITYSDK_OFFSET(0x1B00E2E0)
#define RPG_GAMECORE_INCLUDETASKLISTTEMPLATE_METHOD_3_AFAECF6B8A2A0064_OFFSET UNITYSDK_OFFSET(0x1B00E320)
#define RPG_GAMECORE_INCLUDETASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00E310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncludeTaskListTemplate_TypeDefinitionIndex = 22976;

	class IncludeTaskListTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x28
		::RPG::GameCore::TargetEvaluator* ParamTarget; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* TemplateParamSequences; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDETASKLISTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1636B4B90666F983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeTaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeTaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDETASKLISTTEMPLATE_METHOD_3_1636B4B90666F983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFAECF6B8A2A0064(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDETASKLISTTEMPLATE_METHOD_3_AFAECF6B8A2A0064_OFFSET))(a1, a2);
		}
	};
}
