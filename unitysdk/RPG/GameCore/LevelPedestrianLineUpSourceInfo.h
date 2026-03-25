#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_METHOD_2_0E37E3A62C176468_OFFSET UNITYSDK_OFFSET(0x17345690)
#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17345830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianLineUpSourceInfo_TypeDefinitionIndex = 15875;

	class LevelPedestrianLineUpSourceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 NodeIndex; // 0x10
		::System::Boolean Forward; // 0x14
		::System::Single Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0E37E3A62C176468(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianLineUpSourceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianLineUpSourceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_METHOD_2_0E37E3A62C176468_OFFSET))(a1, a2);
		}
	};
}
