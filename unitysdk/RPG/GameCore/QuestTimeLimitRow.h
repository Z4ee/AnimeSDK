#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C82520)
#define RPG_GAMECORE_QUESTTIMELIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C82D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestTimeLimitRow_TypeDefinitionIndex = 11645;

	class QuestTimeLimitRow : public ::System::Object
	{
	public:
		::System::String* GuideImgPath; // 0x10
		::System::String* FigurePath; // 0x18
		::RPG::Client::TextID BGDesc; // 0x20
		::System::UInt32 UnlockData; // 0x30
		::System::UInt32 QuestID; // 0x34
		::System::UInt32 GuideVideoID; // 0x38
		::System::UInt32 WorldID; // 0x3C
		::RPG::Client::TextID GuideDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::QuestTimeLimitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestTimeLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
