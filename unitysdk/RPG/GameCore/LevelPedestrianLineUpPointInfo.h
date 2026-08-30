#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianLineUpSourceInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_METHOD_2_05BCE191F0D070DA_OFFSET UNITYSDK_OFFSET(0x1D1E5AE0)
#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianLineUpPointInfo_TypeDefinitionIndex = 17090;

	class LevelPedestrianLineUpPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianLineUpSourceInfo*>* Sources; // 0x10
		::System::String* LineUpPointName; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::System::Single LocalRotationY; // 0x2C
		::System::UInt32 MaxMember; // 0x30
		::System::Single LineUpLength; // 0x34
		::System::Single LineUpRange; // 0x38
		::System::Single GetInOffset; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_05BCE191F0D070DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_METHOD_2_05BCE191F0D070DA_OFFSET))(a1, a2);
		}
	};
}
