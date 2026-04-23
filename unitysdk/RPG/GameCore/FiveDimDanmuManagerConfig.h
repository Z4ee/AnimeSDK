#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace RPG::GameCore { class FiveDimDanmuTrackGroup; }

#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_19556FA1477BD066_OFFSET UNITYSDK_OFFSET(0x188FC510)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_B7BAF335BAFED2AC_OFFSET UNITYSDK_OFFSET(0x188FC480)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FC4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuManagerConfig_TypeDefinitionIndex = 17885;

	class FiveDimDanmuManagerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrack*>* TrackList; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrackGroup*>* TrackGroupList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7BAF335BAFED2AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuManagerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_B7BAF335BAFED2AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19556FA1477BD066(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuManagerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_19556FA1477BD066_OFFSET))(a1, a2);
		}
	};
}
