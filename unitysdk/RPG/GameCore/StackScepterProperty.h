#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSCEPTERPROPERTY_METHOD_3_995998A102D7FE30_OFFSET UNITYSDK_OFFSET(0x1B0A6460)
#define RPG_GAMECORE_STACKSCEPTERPROPERTY_METHOD_3_FA44F7FDBBF3841D_OFFSET UNITYSDK_OFFSET(0x1B0A64A0)
#define RPG_GAMECORE_STACKSCEPTERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A6490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackScepterProperty_TypeDefinitionIndex = 22276;

	class StackScepterProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RogueMagicScepterPropertyType Property; // 0x20
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_995998A102D7FE30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackScepterProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackScepterProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY_METHOD_3_995998A102D7FE30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA44F7FDBBF3841D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackScepterProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY_METHOD_3_FA44F7FDBBF3841D_OFFSET))(a1, a2);
		}
	};
}
