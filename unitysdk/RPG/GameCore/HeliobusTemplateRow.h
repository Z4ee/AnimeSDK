#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusTemplateType.h"
#include "unitysdk/RPG/GameCore/HeliobusTendencyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A7230)
#define RPG_GAMECORE_HELIOBUSTEMPLATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172A79D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTemplateRow_TypeDefinitionIndex = 12583;

	class HeliobusTemplateRow : public ::System::Object
	{
	public:
		::System::String* PrefabPathNormal; // 0x10
		::System::String* PrefabPathSmall; // 0x18
		::RPG::Client::TextID HeliobusTemplateContent; // 0x20
		::System::UInt32 PostImgID; // 0x30
		::RPG::GameCore::HeliobusTendencyType TemplateTendency; // 0x34
		::RPG::GameCore::HeliobusTemplateType TemplateType; // 0x38
		::System::UInt32 HeliobusTemplateID; // 0x3C
		::RPG::Client::TextID HeliobusTemplateTitle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusTemplateRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusTemplateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
