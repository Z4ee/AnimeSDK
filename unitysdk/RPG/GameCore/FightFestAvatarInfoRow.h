#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTAVATARINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188DC890)
#define RPG_GAMECORE_FIGHTFESTAVATARINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188DCB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestAvatarInfoRow_TypeDefinitionIndex = 12552;

	class FightFestAvatarInfoRow : public ::System::Object
	{
	public:
		::System::String* VSImgPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::Single>* FigureOffset; // 0x20
		::System::String* HalfFigurePath; // 0x28
		::System::String* FullFigurePath; // 0x30
		::RPG::Client::TextID AvatarName; // 0x38
		::System::UInt32 AvatarID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTAVATARINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestAvatarInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestAvatarInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTAVATARINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
