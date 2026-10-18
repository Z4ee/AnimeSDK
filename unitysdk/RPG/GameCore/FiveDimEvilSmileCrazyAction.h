#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_4_82585705019F504C_OFFSET UNITYSDK_OFFSET(0x1D68ED00)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_4_DD1669C529A59EE1_OFFSET UNITYSDK_OFFSET(0x1D68EC80)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68ECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileCrazyAction_TypeDefinitionIndex = 18786;

	class FiveDimEvilSmileCrazyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DD1669C529A59EE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_4_DD1669C529A59EE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82585705019F504C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_4_82585705019F504C_OFFSET))(a1, a2);
		}
	};
}
