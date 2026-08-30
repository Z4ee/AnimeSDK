#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BD790)
#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BDBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBEOverrideConfigRow_TypeDefinitionIndex = 13600;

	class GridFightTraitBEOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OverrideBEProperty; // 0x18
		::System::String* SpecialIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* OverrideSkillIDList; // 0x28
		::System::UInt32 TraitID; // 0x30
		::System::UInt32 TraitLayer; // 0x34
		::RPG::Client::TextID OneWordDesc; // 0x38
		::RPG::Client::TextID TraitTitleDesc; // 0x48
		::RPG::Client::TextID OneWordDescSimple; // 0x58

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
