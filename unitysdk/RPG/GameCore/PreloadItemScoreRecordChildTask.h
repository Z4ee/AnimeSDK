#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_METHOD_2_BFE1D6F30F26580A_OFFSET UNITYSDK_OFFSET(0x18C60D30)
#define RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C60E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemScoreRecordChildTask_TypeDefinitionIndex = 15492;

	class PreloadItemScoreRecordChildTask : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadGroupType RecordType; // 0x10
		::Il2CppArray<::System::UInt32>* RecordIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFE1D6F30F26580A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItemScoreRecordChildTask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItemScoreRecordChildTask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_METHOD_2_BFE1D6F30F26580A_OFFSET))(a1, a2);
		}
	};
}
