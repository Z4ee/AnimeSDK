#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItemScoreRecordChildTask; }

#define RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_METHOD_2_B1AD970977527DC3_OFFSET UNITYSDK_OFFSET(0x1D16E620)
#define RPG_GAMECORE_PRELOADITEMSCORERECORDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16E790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemScoreRecordTask_TypeDefinitionIndex = 16200;

	class PreloadItemScoreRecordTask : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean RecordAll; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItemScoreRecordChildTask*>* ChildTaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDTASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1AD970977527DC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItemScoreRecordTask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItemScoreRecordTask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_METHOD_2_B1AD970977527DC3_OFFSET))(a1, a2);
		}
	};
}
