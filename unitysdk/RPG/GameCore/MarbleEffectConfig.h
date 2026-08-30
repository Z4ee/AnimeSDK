#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleEffect; }

#define RPG_GAMECORE_MARBLEEFFECTCONFIG_METHOD_2_9AA5B4BDBCAE9945_OFFSET UNITYSDK_OFFSET(0x1D4A7C40)
#define RPG_GAMECORE_MARBLEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A7DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffectConfig_TypeDefinitionIndex = 16715;

	class MarbleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleEffect*>* EffectList; // 0x10
		::System::Boolean OverrideDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9AA5B4BDBCAE9945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG_METHOD_2_9AA5B4BDBCAE9945_OFFSET))(a1, a2);
		}
	};
}
