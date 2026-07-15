#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_METHOD_2_C198C91929929322_OFFSET UNITYSDK_OFFSET(0x1BCC43F0)
#define RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC4550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameProxyEntityConfig_TypeDefinitionIndex = 18138;

	class LittleGameProxyEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* LevelGraph; // 0x18
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C198C91929929322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameProxyEntityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameProxyEntityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_METHOD_2_C198C91929929322_OFFSET))(a1, a2);
		}
	};
}
