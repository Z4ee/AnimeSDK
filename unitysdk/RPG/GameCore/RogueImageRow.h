#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueImageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1760EE10)
#define RPG_GAMECORE_ROGUEIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1760F490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImageRow_TypeDefinitionIndex = 13545;

	class RogueImageRow : public ::System::Object
	{
	public:
		::System::String* TexturePath; // 0x10
		::System::String* ParamStr2; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* ParamStr1; // 0x28
		::RPG::GameCore::RogueImageType ImageType; // 0x30
		::System::UInt32 ImageID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueImageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
