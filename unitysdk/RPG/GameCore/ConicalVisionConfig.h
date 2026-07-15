#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/VisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONICALVISIONCONFIG_METHOD_3_281CB1C61BA7983B_OFFSET UNITYSDK_OFFSET(0x1BC2CFE0)
#define RPG_GAMECORE_CONICALVISIONCONFIG_METHOD_3_F89CF6A3672CD537_OFFSET UNITYSDK_OFFSET(0x1BC2D090)
#define RPG_GAMECORE_CONICALVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConicalVisionConfig_TypeDefinitionIndex = 19224;

	class ConicalVisionConfig : public ::RPG::GameCore::VisionBaseConfig
	{
	public:
		::System::Single DistanceRange; // 0x18
		::System::Single AngleRange; // 0x1C
		::System::Single AlertIntervalLeftValue; // 0x20
		::System::Single AlertIntervalRightValue; // 0x24
		::System::String* AttachedPointName; // 0x28
		::System::String* TargetPivotPointName; // 0x30
		::System::String* TargetRayPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityTag>* ExcludeEntityTags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_281CB1C61BA7983B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConicalVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConicalVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG_METHOD_3_281CB1C61BA7983B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F89CF6A3672CD537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConicalVisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG_METHOD_3_F89CF6A3672CD537_OFFSET))(a1, a2);
		}
	};
}
