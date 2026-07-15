#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER_METHOD_3_80EC226578D5674A_OFFSET UNITYSDK_OFFSET(0x1B9D00A0)
#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER_METHOD_3_D6815F5FC1A3A101_OFFSET UNITYSDK_OFFSET(0x1B9D0060)
#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D0090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMapPoseSwitcher_TypeDefinitionIndex = 20154;

	class RemoveMapPoseSwitcher : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6815F5FC1A3A101(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMapPoseSwitcher*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMapPoseSwitcher*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER_METHOD_3_D6815F5FC1A3A101_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80EC226578D5674A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER_METHOD_3_80EC226578D5674A_OFFSET))(a1, a2);
		}
	};
}
