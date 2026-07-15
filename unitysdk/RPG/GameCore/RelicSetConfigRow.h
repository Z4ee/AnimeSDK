#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9CAE20)
#define RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CB660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigRow_TypeDefinitionIndex = 14055;

	class RelicSetConfigRow : public ::System::Object
	{
	public:
		::System::String* SetIconFigurePath; // 0x10
		::System::String* SetIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* SetSkillList; // 0x20
		::System::String* ReleaseVersion; // 0x28
		::System::UInt32 DisplayItemIDRarity4; // 0x30
		::System::UInt32 DisplayItemID; // 0x34
		::RPG::Client::TextID SetName; // 0x38
		::System::Boolean Release; // 0x48
		::System::Boolean IsPlanarSuit; // 0x49
		::System::UInt32 SetID; // 0x4C

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
