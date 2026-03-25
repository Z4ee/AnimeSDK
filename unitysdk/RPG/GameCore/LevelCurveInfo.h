#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelCurvePointInfo; }

#define RPG_GAMECORE_LEVELCURVEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x173314E0)
#define RPG_GAMECORE_LEVELCURVEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173314A0)
#define RPG_GAMECORE_LEVELCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173314D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurveInfo_TypeDefinitionIndex = 15959;

	class LevelCurveInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCurvePointInfo*>* PointList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelCurveInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelCurveInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
