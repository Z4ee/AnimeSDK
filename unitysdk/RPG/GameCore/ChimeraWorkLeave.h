#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkLeaveType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAWORKLEAVE_METHOD_3_500279D05C50F12E_OFFSET UNITYSDK_OFFSET(0x1964E460)
#define RPG_GAMECORE_CHIMERAWORKLEAVE_METHOD_3_6312AFD77B05E852_OFFSET UNITYSDK_OFFSET(0x1964E4C0)
#define RPG_GAMECORE_CHIMERAWORKLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1964E4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkLeave_TypeDefinitionIndex = 15093;

	class ChimeraWorkLeave : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraWorkLeaveType LeaveType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_500279D05C50F12E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkLeave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE_METHOD_3_500279D05C50F12E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6312AFD77B05E852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkLeave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE_METHOD_3_6312AFD77B05E852_OFFSET))(a1, a2);
		}
	};
}
