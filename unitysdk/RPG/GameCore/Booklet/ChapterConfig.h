#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class SectionSynopsis; }

#define RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_METHOD_2_F8BFC3606F4F8893_OFFSET UNITYSDK_OFFSET(0x1CE8A920)
#define RPG_GAMECORE_BOOKLET_CHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8AB00)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ChapterConfig_TypeDefinitionIndex = 24677;

	class ChapterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::Il2CppArray<::RPG::GameCore::Booklet::SectionSynopsis*>* SectionSynopsisList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F8BFC3606F4F8893(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_METHOD_2_F8BFC3606F4F8893_OFFSET))(a1, a2);
		}
	};
}
