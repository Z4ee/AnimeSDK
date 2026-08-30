#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2A6AD0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A7520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkDataRow_TypeDefinitionIndex = 15211;

	class TutorialGuideTalkDataRow : public ::System::Object
	{
	public:
		::System::String* AvatarHeadIcon; // 0x10
		::RPG::Client::TextID TalkDataText; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideTalkDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideTalkDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
