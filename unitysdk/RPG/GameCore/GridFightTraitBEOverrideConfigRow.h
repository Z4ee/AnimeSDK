#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1980E980)
#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1980ED90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBEOverrideConfigRow_TypeDefinitionIndex = 13059;

	class GridFightTraitBEOverrideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OverrideBEProperty; // 0x10
		::Il2CppArray<::System::UInt32>* OverrideSkillIDList; // 0x18
		::System::String* AbilityName; // 0x20
		::System::String* SpecialIconPath; // 0x28
		::RPG::Client::TextID OneWordDesc; // 0x30
		::RPG::Client::TextID TraitTitleDesc; // 0x40
		::RPG::Client::TextID OneWordDescSimple; // 0x50
		::System::UInt32 TraitID; // 0x60
		::System::UInt32 TraitLayer; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
