#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPENDANT_METHOD_2_0605CCA380D7C6F9_OFFSET UNITYSDK_OFFSET(0x187D4AF0)
#define RPG_GAMECORE_CHARACTEROUTFITPENDANT__CTOR_OFFSET UNITYSDK_OFFSET(0x187D4CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPendant_TypeDefinitionIndex = 16594;

	class CharacterOutfitPendant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::RPG::MVector3 LocalPositionOffset; // 0x18
		::RPG::MVector3 LocalRotationOffset; // 0x24
		::System::Single LocalScale; // 0x30
		::System::String* PrefabPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0605CCA380D7C6F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOutfitPendant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOutfitPendant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANT_METHOD_2_0605CCA380D7C6F9_OFFSET))(a1, a2);
		}
	};
}
