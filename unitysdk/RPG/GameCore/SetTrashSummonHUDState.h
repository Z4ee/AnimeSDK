#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TrashSummonPeriodState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_METHOD_3_A2FE12F554B878C3_OFFSET UNITYSDK_OFFSET(0x1E094360)
#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_METHOD_3_B93844927BAC2D9E_OFFSET UNITYSDK_OFFSET(0x1E094320)
#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E094350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrashSummonHUDState_TypeDefinitionIndex = 22964;

	class SetTrashSummonHUDState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TrashSummonPeriodState PeriodState; // 0x18
		::System::Boolean IsEnhance; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B93844927BAC2D9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrashSummonHUDState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrashSummonHUDState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_METHOD_3_B93844927BAC2D9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2FE12F554B878C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrashSummonHUDState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_METHOD_3_A2FE12F554B878C3_OFFSET))(a1, a2);
		}
	};
}
