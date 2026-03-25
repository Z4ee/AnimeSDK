#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733CE00)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1733CF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCBakedInfo_TypeDefinitionIndex = 15728;

	class LevelNPCBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::System::UInt32>* ConnectWithSubMissionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCBakedInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
