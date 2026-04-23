#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_METHOD_2_0EFFBEBCB0EDF255_OFFSET UNITYSDK_OFFSET(0x18A39960)
#define RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JukeBoxMusicTimesConfig_TypeDefinitionIndex = 15519;

	class JukeBoxMusicTimesConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MusicTimes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0EFFBEBCB0EDF255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JukeBoxMusicTimesConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JukeBoxMusicTimesConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_METHOD_2_0EFFBEBCB0EDF255_OFFSET))(a1, a2);
		}
	};
}
