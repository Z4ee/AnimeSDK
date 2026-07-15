#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelBaseCurvePointInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B02E5C0)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B02FE50)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02E5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurvePointInfo_TypeDefinitionIndex = 16677;

	class LevelCurvePointInfo : public ::RPG::GameCore::LevelBaseCurvePointInfo
	{
	public:
		::RPG::MVector3 Position; // 0x18
		::System::Byte ControlType; // 0x24
		::RPG::MVector3 Control1; // 0x28
		::RPG::MVector3 Control2; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCurvePointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurvePointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCurvePointInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
