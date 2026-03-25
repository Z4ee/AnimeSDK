#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SERIALBELLSCONFIG_METHOD_2_682129637B3B9ABA_OFFSET UNITYSDK_OFFSET(0x1769F680)
#define RPG_GAMECORE_SERIALBELLSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SerialBellsConfig_TypeDefinitionIndex = 14993;

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

		static ::System::Void Method_2_682129637B3B9ABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SerialBellsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SerialBellsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSCONFIG_METHOD_2_682129637B3B9ABA_OFFSET))(a1, a2);
		}
	};
}
