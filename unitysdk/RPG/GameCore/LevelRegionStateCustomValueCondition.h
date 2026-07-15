#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelRegionStateCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B0881B0)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B088720)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0881A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCustomValueCondition_TypeDefinitionIndex = 16686;

	class LevelRegionStateCustomValueCondition : public ::RPG::GameCore::LevelRegionStateCondition
	{
	public:
		::System::String* CustomValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateCustomValueCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateCustomValueCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
