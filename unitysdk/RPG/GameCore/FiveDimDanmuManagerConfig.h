#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace RPG::GameCore { class FiveDimDanmuTrackGroup; }

#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_1978C87427F8AD46_OFFSET UNITYSDK_OFFSET(0x19737B40)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_1B736D62506980A4_OFFSET UNITYSDK_OFFSET(0x19737BD0)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19737BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuManagerConfig_TypeDefinitionIndex = 17914;

	class FiveDimDanmuManagerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrack*>* TrackList; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrackGroup*>* TrackGroupList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1978C87427F8AD46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuManagerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_1978C87427F8AD46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B736D62506980A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuManagerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_METHOD_3_1B736D62506980A4_OFFSET))(a1, a2);
		}
	};
}
