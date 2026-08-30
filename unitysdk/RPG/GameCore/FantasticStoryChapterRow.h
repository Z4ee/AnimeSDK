#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D088A60)
#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D088D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryChapterRow_TypeDefinitionIndex = 11447;

	class FantasticStoryChapterRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::UInt32 ChapterID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 MissionID; // 0x30
		::RPG::Client::TextID describe; // 0x38

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
