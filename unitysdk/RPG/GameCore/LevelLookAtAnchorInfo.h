#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELLOOKATANCHORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10F220)
#define RPG_GAMECORE_LEVELLOOKATANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C119AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLookAtAnchorInfo_TypeDefinitionIndex = 17165;

	class LevelLookAtAnchorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATANCHORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelLookAtAnchorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLookAtAnchorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATANCHORINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
