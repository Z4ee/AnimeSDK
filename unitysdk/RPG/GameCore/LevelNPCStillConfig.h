#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELNPCSTILLCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987E070)
#define RPG_GAMECORE_LEVELNPCSTILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1987E150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCStillConfig_TypeDefinitionIndex = 16419;

	class LevelNPCStillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*>* StillConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCStillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCStillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
