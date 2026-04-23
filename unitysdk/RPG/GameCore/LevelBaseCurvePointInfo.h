#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELBASECURVEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A3CF00)
#define RPG_GAMECORE_LEVELBASECURVEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3CC90)
#define RPG_GAMECORE_LEVELBASECURVEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3CEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBaseCurvePointInfo_TypeDefinitionIndex = 16482;

	class LevelBaseCurvePointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Alias; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBASECURVEPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelBaseCurvePointInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelBaseCurvePointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBASECURVEPOINTINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelBaseCurvePointInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelBaseCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBASECURVEPOINTINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
