#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelBaseCurvePointInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C10DA00)
#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10E690)
#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10D9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCirclePointInfo_TypeDefinitionIndex = 17180;

	class LevelCirclePointInfo : public ::RPG::GameCore::LevelBaseCurvePointInfo
	{
	public:
		::System::Single Angle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCirclePointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCirclePointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCirclePointInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCirclePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
