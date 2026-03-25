#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_METHOD_2_072711BD8F16EBED_OFFSET UNITYSDK_OFFSET(0x1776A620)
#define RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1776A880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineSceneItemInfo_TypeDefinitionIndex = 17594;

	class StagePVSOfflineSceneItemInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 lod0PathIndex; // 0x10
		::Struct_2_0ACB88BD1D804FF7 matrix; // 0x14
		::System::Int32 OwnerBlockIndex; // 0x54
		::System::Int32 prefabIndex; // 0x58
		::System::Int32 prefabInstanceIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_072711BD8F16EBED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineSceneItemInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineSceneItemInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_METHOD_2_072711BD8F16EBED_OFFSET))(a1, a2);
		}
	};
}
