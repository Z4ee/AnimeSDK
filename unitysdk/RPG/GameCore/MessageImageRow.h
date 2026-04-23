#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE2C90)
#define RPG_GAMECORE_MESSAGEIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE32B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageImageRow_TypeDefinitionIndex = 13664;

	class MessageImageRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* FemaleImagePath; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageImageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
