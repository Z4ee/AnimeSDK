#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHONECASECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BEF690)
#define RPG_GAMECORE_PHONECASECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEF8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneCaseConfigRow_TypeDefinitionIndex = 13649;

	class PhoneCaseConfigRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* ItemFigurePath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 CaseID; // 0x30
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x34
		::System::UInt32 ShowParam; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONECASECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PhoneCaseConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhoneCaseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONECASECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
