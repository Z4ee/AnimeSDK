#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelEntityRef; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_METHOD_2_FD543A47F11708BD_OFFSET UNITYSDK_OFFSET(0x1C114120)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1143B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedSubmapInfo_TypeDefinitionIndex = 16969;

	class LevelFloorBakedSubmapInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmapID; // 0x10
		::RPG::GameCore::MinimapAreaType Type; // 0x14
		::System::UInt32 AreaID; // 0x18
		::System::Int32 DefaultLayer; // 0x1C
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* FiveDimInstances; // 0x28
		::System::UInt32 ParentSubmapID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD543A47F11708BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorBakedSubmapInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorBakedSubmapInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_METHOD_2_FD543A47F11708BD_OFFSET))(a1, a2);
		}
	};
}
