#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17593050)
#define RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175938B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigRow_TypeDefinitionIndex = 13361;

	class RelicSetConfigRow : public ::System::Object
	{
	public:
		::System::String* ReleaseVersion; // 0x10
		::Il2CppArray<::System::UInt32>* SetSkillList; // 0x18
		::System::String* SetIconFigurePath; // 0x20
		::System::String* SetIconPath; // 0x28
		::System::UInt32 DisplayItemID; // 0x30
		::System::UInt32 DisplayItemIDRarity4; // 0x34
		::System::Boolean IsPlanarSuit; // 0x38
		::System::Boolean Release; // 0x39
		::System::UInt32 SetID; // 0x3C
		::RPG::Client::TextID SetName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicSetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
