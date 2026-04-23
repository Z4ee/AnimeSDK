#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraMotionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18808F70)
#define RPG_GAMECORE_CHIMERAMOTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188090B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraMotionRow_TypeDefinitionIndex = 12320;

	class ChimeraMotionRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraMotionType MotionKey; // 0x10
		::System::UInt32 MotionID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAMOTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraMotionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraMotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAMOTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
