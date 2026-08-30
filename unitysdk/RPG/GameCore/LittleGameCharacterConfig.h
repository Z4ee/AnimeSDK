#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_METHOD_2_2325BBD0FA631163_OFFSET UNITYSDK_OFFSET(0x1D1FFB90)
#define RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FFD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCharacterConfig_TypeDefinitionIndex = 18669;

	class LittleGameCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::RPG::GameCore::LittleGameAttachPointConfig* AttachPointConfig; // 0x18
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x20
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2325BBD0FA631163(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_METHOD_2_2325BBD0FA631163_OFFSET))(a1, a2);
		}
	};
}
