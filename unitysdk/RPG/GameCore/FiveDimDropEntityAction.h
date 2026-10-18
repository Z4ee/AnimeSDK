#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_4_16F47FC015BAB7DB_OFFSET UNITYSDK_OFFSET(0x1D6BA8C0)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_4_5B76DFAA7301953C_OFFSET UNITYSDK_OFFSET(0x1D6BA910)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDropEntityAction_TypeDefinitionIndex = 18714;

	class FiveDimDropEntityAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::MVector3 InitDropVelocity; // 0x10
		::System::Single DropGravity; // 0x1C
		::System::Single StunTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16F47FC015BAB7DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDropEntityAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDropEntityAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_4_16F47FC015BAB7DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B76DFAA7301953C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_4_5B76DFAA7301953C_OFFSET))(a1, a2);
		}
	};
}
