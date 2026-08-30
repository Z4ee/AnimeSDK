#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_52399EB291391AC9_OFFSET UNITYSDK_OFFSET(0x1D036950)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_83AFC2CE6CA289F9_OFFSET UNITYSDK_OFFSET(0x1D0369B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0369A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ModifyPreviewValue_TypeDefinitionIndex = 15985;

	class DiceCombatTaskConfig_ModifyPreviewValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::RPG::GameCore::DiceCombatValueOperation Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52399EB291391AC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_52399EB291391AC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83AFC2CE6CA289F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_83AFC2CE6CA289F9_OFFSET))(a1, a2);
		}
	};
}
