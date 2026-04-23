#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SERIALBELLSNOTECONFIG_METHOD_2_DFBCE4974F4703F8_OFFSET UNITYSDK_OFFSET(0x18E022F0)
#define RPG_GAMECORE_SERIALBELLSNOTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E02490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SerialBellsNoteConfig_TypeDefinitionIndex = 15499;

	class SerialBellsNoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ControllerNote; // 0x10
		::System::String* EffectAttachPoint; // 0x18
		::System::Boolean IsEffectOnSide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSNOTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DFBCE4974F4703F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SerialBellsNoteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SerialBellsNoteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSNOTECONFIG_METHOD_2_DFBCE4974F4703F8_OFFSET))(a1, a2);
		}
	};
}
