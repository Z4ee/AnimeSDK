#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMSKINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D308AA0)
#define RPG_GAMECORE_PAMSKINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D308C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamSkinConfigRow_TypeDefinitionIndex = 14212;

	class PamSkinConfigRow : public ::System::Object
	{
	public:
		::System::String* SkinIcon; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* ManikinPrefab; // 0x20
		::System::String* JsonPath; // 0x28
		::System::UInt32 SkinID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMSKINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamSkinConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamSkinConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMSKINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
