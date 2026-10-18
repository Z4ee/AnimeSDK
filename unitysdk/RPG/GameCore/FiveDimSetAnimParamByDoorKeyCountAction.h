#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_4_8032F1D2474EFA9A_OFFSET UNITYSDK_OFFSET(0x1D6D82F0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_4_BB410EBCA4557511_OFFSET UNITYSDK_OFFSET(0x1D6D82B0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D82E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByDoorKeyCountAction_TypeDefinitionIndex = 18648;

	class FiveDimSetAnimParamByDoorKeyCountAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB410EBCA4557511(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_4_BB410EBCA4557511_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8032F1D2474EFA9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_4_8032F1D2474EFA9A_OFFSET))(a1, a2);
		}
	};
}
