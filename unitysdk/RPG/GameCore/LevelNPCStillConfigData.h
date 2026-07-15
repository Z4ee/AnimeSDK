#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B077870)
#define RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B077A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCStillConfigData_TypeDefinitionIndex = 16580;

	class LevelNPCStillConfigData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::System::String* AnimationClipPath; // 0x18
		::System::Int32 Frame; // 0x20
		::System::Single NormalizedTime; // 0x24
		::RPG::GameCore::ColliderConfig* ColliderConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCStillConfigData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCStillConfigData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
