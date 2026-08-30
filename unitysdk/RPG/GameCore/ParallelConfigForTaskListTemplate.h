#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_METHOD_2_1DE9AE923D7B4BEA_OFFSET UNITYSDK_OFFSET(0x1D309EF0)
#define RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelConfigForTaskListTemplate_TypeDefinitionIndex = 23043;

	class ParallelConfigForTaskListTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicFloat* BaseDelay; // 0x18
		::RPG::GameCore::DynamicFloat* DelayInterval; // 0x20
		::RPG::GameCore::DynamicFloat* ParallelCount; // 0x28
		::RPG::GameCore::TargetEvaluator* SetAsParamEntity; // 0x30
		::System::Boolean UseParamEntityCountForParallelCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1DE9AE923D7B4BEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelConfigForTaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelConfigForTaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_METHOD_2_1DE9AE923D7B4BEA_OFFSET))(a1, a2);
		}
	};
}
