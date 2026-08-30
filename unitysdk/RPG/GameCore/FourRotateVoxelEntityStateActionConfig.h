#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_METHOD_2_946F3BF612CF16B1_OFFSET UNITYSDK_OFFSET(0x1D113CB0)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D113EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntityStateActionConfig_TypeDefinitionIndex = 16588;

	class FourRotateVoxelEntityStateActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEvent* InitEvent; // 0x10
		::RPG::GameCore::LittleGameEvent* EnterEvent; // 0x18
		::RPG::GameCore::LittleGameEvent* ExitEvent; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* InitActionConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* EnterActionConfigs; // 0x30
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* ExitActionConfigs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_946F3BF612CF16B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATEACTIONCONFIG_METHOD_2_946F3BF612CF16B1_OFFSET))(a1, a2);
		}
	};
}
