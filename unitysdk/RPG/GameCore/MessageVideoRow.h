#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEVIDEOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE9140)
#define RPG_GAMECORE_MESSAGEVIDEOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE96D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageVideoRow_TypeDefinitionIndex = 13666;

	class MessageVideoRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 VideoID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageVideoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageVideoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
