#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VIDEOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190F3EF0)
#define RPG_GAMECORE_VIDEOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190F4560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoConfigRow_TypeDefinitionIndex = 14624;

	class VideoConfigRow : public ::System::Object
	{
	public:
		::System::String* VideoPath; // 0x10
		::System::String* CaptionPath; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x20
		::System::UInt32 VideoID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VideoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
