#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC3D50)
#define RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC45D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigRow_TypeDefinitionIndex = 13907;

	class RelicSetConfigRow : public ::System::Object
	{
	public:
		::System::String* ReleaseVersion; // 0x10
		::Il2CppArray<::System::UInt32>* SetSkillList; // 0x18
		::System::String* SetIconPath; // 0x20
		::System::String* SetIconFigurePath; // 0x28
		::RPG::Client::TextID SetName; // 0x30
		::System::UInt32 SetID; // 0x40
		::System::UInt32 DisplayItemID; // 0x44
		::System::UInt32 DisplayItemIDRarity4; // 0x48
		::System::Boolean Release; // 0x4C
		::System::Boolean IsPlanarSuit; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
