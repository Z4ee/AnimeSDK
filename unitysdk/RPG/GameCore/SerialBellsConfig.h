#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SERIALBELLSCONFIG_METHOD_2_2761D8737C514F54_OFFSET UNITYSDK_OFFSET(0x1D4D92A0)
#define RPG_GAMECORE_SERIALBELLSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D9470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SerialBellsConfig_TypeDefinitionIndex = 16208;

	class SerialBellsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SerialBellsNoteConfig*>* NoteMap; // 0x10
		::System::String* EndCue; // 0x18
		::System::String* EffectFrontPath; // 0x20
		::System::String* EffectSidePath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2761D8737C514F54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SerialBellsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SerialBellsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSCONFIG_METHOD_2_2761D8737C514F54_OFFSET))(a1, a2);
		}
	};
}
