#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_METHOD_4_0C80A23F5E5A400D_OFFSET UNITYSDK_OFFSET(0x1D6DB240)
#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_METHOD_4_3B98987F3A5A5E4A_OFFSET UNITYSDK_OFFSET(0x1D6DB200)
#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSharedMatStateAction_TypeDefinitionIndex = 18694;

	class FiveDimSetSharedMatStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PrototypeID; // 0x10
		::RPG::GameCore::FDRIStateMaskEnum FDRIState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3B98987F3A5A5E4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_METHOD_4_3B98987F3A5A5E4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C80A23F5E5A400D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_METHOD_4_0C80A23F5E5A400D_OFFSET))(a1, a2);
		}
	};
}
