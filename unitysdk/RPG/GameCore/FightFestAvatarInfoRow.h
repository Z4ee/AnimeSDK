#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTAVATARINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0D3430)
#define RPG_GAMECORE_FIGHTFESTAVATARINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D36F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestAvatarInfoRow_TypeDefinitionIndex = 13173;

	class FightFestAvatarInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* FigureOffset; // 0x10
		::System::String* VSImgPath; // 0x18
		::System::String* HalfFigurePath; // 0x20
		::System::String* FullFigurePath; // 0x28
		::System::String* IconPath; // 0x30
		::System::UInt32 AvatarID; // 0x38
		::RPG::Client::TextID AvatarName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTAVATARINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestAvatarInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestAvatarInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTAVATARINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
