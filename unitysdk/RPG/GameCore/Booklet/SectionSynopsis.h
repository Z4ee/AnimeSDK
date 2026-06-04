#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_METHOD_2_0B260158A5A971E5_OFFSET UNITYSDK_OFFSET(0x194E4390)
#define RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS__CTOR_OFFSET UNITYSDK_OFFSET(0x194E4560)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SectionSynopsis_TypeDefinitionIndex = 23598;

	class SectionSynopsis : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::System::String* ConfigPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B260158A5A971E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SectionSynopsis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SectionSynopsis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_METHOD_2_0B260158A5A971E5_OFFSET))(a1, a2);
		}
	};
}
