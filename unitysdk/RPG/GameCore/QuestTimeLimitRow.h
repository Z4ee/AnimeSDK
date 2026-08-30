#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18F340)
#define RPG_GAMECORE_QUESTTIMELIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18FB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestTimeLimitRow_TypeDefinitionIndex = 12233;

	class QuestTimeLimitRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* GuideImgPath; // 0x18
		::RPG::Client::TextID BGDesc; // 0x20
		::System::UInt32 UnlockData; // 0x30
		::System::UInt32 WorldID; // 0x34
		::RPG::Client::TextID GuideDesc; // 0x38
		::System::UInt32 QuestID; // 0x48
		::System::UInt32 GuideVideoID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestTimeLimitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestTimeLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
