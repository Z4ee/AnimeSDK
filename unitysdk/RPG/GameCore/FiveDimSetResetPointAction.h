#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_3_06DD1C4C9DBCCFF7_OFFSET UNITYSDK_OFFSET(0x197562D0)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_3_1C4A219CE70BE5B6_OFFSET UNITYSDK_OFFSET(0x19756260)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x197562B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetResetPointAction_TypeDefinitionIndex = 17747;

	class FiveDimSetResetPointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::UInt32 EntityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C4A219CE70BE5B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetResetPointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetResetPointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_3_1C4A219CE70BE5B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06DD1C4C9DBCCFF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_3_06DD1C4C9DBCCFF7_OFFSET))(a1, a2);
		}
	};
}
