#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PenaconyEndmostChroniclePerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_METHOD_3_28766F2E9949F0B4_OFFSET UNITYSDK_OFFSET(0x1BA05BD0)
#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_METHOD_3_44DD3ADED33DD3BD_OFFSET UNITYSDK_OFFSET(0x1BA05B90)
#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA05BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyChroniclePerformance_TypeDefinitionIndex = 21024;

	class PlayPenaconyChroniclePerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PenaconyEndmostChroniclePerformanceType PerformanceType; // 0x18
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44DD3ADED33DD3BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyChroniclePerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyChroniclePerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_METHOD_3_44DD3ADED33DD3BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28766F2E9949F0B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyChroniclePerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyChroniclePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_METHOD_3_28766F2E9949F0B4_OFFSET))(a1, a2);
		}
	};
}
