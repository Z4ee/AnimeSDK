#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OPTIONTRIGGERINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D301830)
#define RPG_GAMECORE_OPTIONTRIGGERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D301A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionTriggerInfo_TypeDefinitionIndex = 21346;

	class OptionTriggerInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID OptionTextmapID; // 0x10
		::System::String* ButtonIcon; // 0x20
		::System::String* TriggerCustomString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTRIGGERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OptionTriggerInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionTriggerInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTRIGGERINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
