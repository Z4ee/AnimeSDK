#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }

#define RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_METHOD_2_4FC8881B8AB639AD_OFFSET UNITYSDK_OFFSET(0x1993EE70)
#define RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1993EF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiddleSinglePackMissionConfig_TypeDefinitionIndex = 18028;

	class MiddleSinglePackMissionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PackMissionID; // 0x10
		::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* CustomUnlockConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4FC8881B8AB639AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiddleSinglePackMissionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiddleSinglePackMissionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_METHOD_2_4FC8881B8AB639AD_OFFSET))(a1, a2);
		}
	};
}
