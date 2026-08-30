#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BE6C0)
#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BE920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectIdConfigRow_TypeDefinitionIndex = 13567;

	class GridFightTraitEffectIdConfigRow : public ::System::Object
	{
	public:
		::System::String* TraitEffectJson; // 0x10
		::System::String* TraitEffectIconPath; // 0x18
		::RPG::Client::TextID TraitEffectDesc; // 0x20
		::RPG::GameCore::GridFightTraitEffectType TraitEffectType; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
