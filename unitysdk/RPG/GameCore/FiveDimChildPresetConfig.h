#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimChildPresetItemConfig; }

#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_METHOD_2_C25A99E45C6868C1_OFFSET UNITYSDK_OFFSET(0x171EBF50)
#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EC020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChildPresetConfig_TypeDefinitionIndex = 15319;

	class FiveDimChildPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimChildPresetItemConfig*>* ChildPresetList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C25A99E45C6868C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChildPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChildPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_METHOD_2_C25A99E45C6868C1_OFFSET))(a1, a2);
		}
	};
}
