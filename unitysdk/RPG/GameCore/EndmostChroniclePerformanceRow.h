#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A8B90)
#define RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188A8D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndmostChroniclePerformanceRow_TypeDefinitionIndex = 13386;

	class EndmostChroniclePerformanceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ELevelPerformanceType Type; // 0x14
		::System::Int32 Order; // 0x18
		::System::UInt32 EndmostChronicleID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EndmostChroniclePerformanceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndmostChroniclePerformanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
