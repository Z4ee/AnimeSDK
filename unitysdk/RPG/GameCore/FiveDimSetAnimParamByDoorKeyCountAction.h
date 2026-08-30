#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_28F0918EFB1C4397_OFFSET UNITYSDK_OFFSET(0x1D0FEB50)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_9D1F9F64ECEE6ADC_OFFSET UNITYSDK_OFFSET(0x1D0FEB10)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FEB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByDoorKeyCountAction_TypeDefinitionIndex = 18439;

	class FiveDimSetAnimParamByDoorKeyCountAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D1F9F64ECEE6ADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_9D1F9F64ECEE6ADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28F0918EFB1C4397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_28F0918EFB1C4397_OFFSET))(a1, a2);
		}
	};
}
