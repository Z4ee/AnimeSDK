#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELDIALOGPACKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17331B40)
#define RPG_GAMECORE_LEVELDIALOGPACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17331C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDialogPackInfo_TypeDefinitionIndex = 15829;

	class LevelDialogPackInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* LevelGraph; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGPACKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDialogPackInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDialogPackInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGPACKINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
