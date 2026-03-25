#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelBaseCurvePointInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1732F800)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173317A0)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1732F7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurvePointInfo_TypeDefinitionIndex = 15957;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelCurvePointInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurvePointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelCurvePointInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
