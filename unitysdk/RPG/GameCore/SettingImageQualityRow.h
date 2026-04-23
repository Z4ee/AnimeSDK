#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETTINGIMAGEQUALITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E4C260)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4C880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingImageQualityRow_TypeDefinitionIndex = 14306;

	class SettingImageQualityRow : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::RPG::Client::TextID ShowString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SettingImageQualityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SettingImageQualityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
