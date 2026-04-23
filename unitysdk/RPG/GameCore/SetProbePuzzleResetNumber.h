#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_0794DFF2A1E87725_OFFSET UNITYSDK_OFFSET(0x18E3ED00)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_E20E7A178FC4FB23_OFFSET UNITYSDK_OFFSET(0x18E3EC80)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3ECD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetProbePuzzleResetNumber_TypeDefinitionIndex = 20875;

	class SetProbePuzzleResetNumber : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Number; // 0x18
		::RPG::GameCore::DynamicString* NumberDS; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E20E7A178FC4FB23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetProbePuzzleResetNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetProbePuzzleResetNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_E20E7A178FC4FB23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0794DFF2A1E87725(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_0794DFF2A1E87725_OFFSET))(a1, a2);
		}
	};
}
