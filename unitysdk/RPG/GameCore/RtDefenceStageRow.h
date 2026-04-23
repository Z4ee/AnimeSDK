#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTDEFENCESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DCF110)
#define RPG_GAMECORE_RTDEFENCESTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceStageRow_TypeDefinitionIndex = 17158;

	class RtDefenceStageRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::String* ConfigPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RtDefenceStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
