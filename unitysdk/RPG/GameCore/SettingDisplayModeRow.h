#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETTINGDISPLAYMODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D516140)
#define RPG_GAMECORE_SETTINGDISPLAYMODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D516B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingDisplayModeRow_TypeDefinitionIndex = 14928;

	class SettingDisplayModeRow : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::RPG::Client::TextID ShowString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SettingDisplayModeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SettingDisplayModeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
