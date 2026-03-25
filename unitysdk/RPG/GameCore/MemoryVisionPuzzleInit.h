#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_METHOD_3_4ED02B48D73ECBB1_OFFSET UNITYSDK_OFFSET(0x173CE160)
#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_METHOD_3_9CDEE3880690CA0E_OFFSET UNITYSDK_OFFSET(0x173CE0D0)
#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x173CE130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemoryVisionPuzzleInit_TypeDefinitionIndex = 19386;

	class MemoryVisionPuzzleInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetEntityID; // 0x18
		::System::UInt32 SubmissionID; // 0x1C
		::System::UInt32 MissionCustomValueIndex; // 0x20
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CDEE3880690CA0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemoryVisionPuzzleInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemoryVisionPuzzleInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_METHOD_3_9CDEE3880690CA0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4ED02B48D73ECBB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemoryVisionPuzzleInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemoryVisionPuzzleInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_METHOD_3_4ED02B48D73ECBB1_OFFSET))(a1, a2);
		}
	};
}
