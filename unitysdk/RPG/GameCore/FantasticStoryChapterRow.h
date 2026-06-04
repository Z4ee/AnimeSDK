#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19707BA0)
#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19707E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryChapterRow_TypeDefinitionIndex = 11008;

	class FantasticStoryChapterRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID describe; // 0x18
		::System::UInt32 MissionID; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ChapterID; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYCHAPTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FantasticStoryChapterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FantasticStoryChapterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
