#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178DC5E0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178DCC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkDataRow_TypeDefinitionIndex = 14125;

	class TutorialGuideTalkDataRow : public ::System::Object
	{
	public:
		::System::String* AvatarHeadIcon; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID TalkDataText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialGuideTalkDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideTalkDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
