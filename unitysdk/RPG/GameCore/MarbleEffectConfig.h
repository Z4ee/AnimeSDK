#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleEffect; }

#define RPG_GAMECORE_MARBLEEFFECTCONFIG_METHOD_2_706AA6093EDAE11F_OFFSET UNITYSDK_OFFSET(0x1738D820)
#define RPG_GAMECORE_MARBLEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1738D990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffectConfig_TypeDefinitionIndex = 15477;

	class MarbleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleEffect*>* EffectList; // 0x10
		::System::Boolean OverrideDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_706AA6093EDAE11F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG_METHOD_2_706AA6093EDAE11F_OFFSET))(a1, a2);
		}
	};
}
