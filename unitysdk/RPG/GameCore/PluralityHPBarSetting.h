#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLURALITYHPBARSETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA127A0)
#define RPG_GAMECORE_PLURALITYHPBARSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA12A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PluralityHPBarSetting_TypeDefinitionIndex = 16463;

	class PluralityHPBarSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftHPBarColor1; // 0x10
		::System::String* LeftHPBarColor2; // 0x18
		::System::String* LeftHPBarColor3; // 0x20
		::System::String* LeftHPBarColor4; // 0x28
		::System::String* RightHPBarColor1; // 0x30
		::System::String* RightHPBarColor2; // 0x38
		::System::String* RightHPBarColor3; // 0x40
		::System::String* RightHPBarColor4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLURALITYHPBARSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PluralityHPBarSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PluralityHPBarSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLURALITYHPBARSETTING_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
