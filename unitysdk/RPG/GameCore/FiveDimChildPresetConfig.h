#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimChildPresetItemConfig; }

#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_METHOD_2_E146ABBCB5A04144_OFFSET UNITYSDK_OFFSET(0x1BA8CD40)
#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8CE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChildPresetConfig_TypeDefinitionIndex = 16067;

	class FiveDimChildPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimChildPresetItemConfig*>* ChildPresetList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E146ABBCB5A04144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChildPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChildPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_METHOD_2_E146ABBCB5A04144_OFFSET))(a1, a2);
		}
	};
}
