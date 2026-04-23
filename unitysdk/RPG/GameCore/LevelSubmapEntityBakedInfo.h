#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5AB90)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSubmapEntityBakedInfo_TypeDefinitionIndex = 16259;

	class LevelSubmapEntityBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 SubmapID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSubmapEntityBakedInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSubmapEntityBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
