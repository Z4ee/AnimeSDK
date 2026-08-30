#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_0794DFF2A1E87725_OFFSET UNITYSDK_OFFSET(0x1D50AF50)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_91B8BB197E5CD886_OFFSET UNITYSDK_OFFSET(0x1D50AF10)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50AF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetProbePuzzleResetNumber_TypeDefinitionIndex = 21769;

	class SetProbePuzzleResetNumber : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Number; // 0x18
		::RPG::GameCore::DynamicString* NumberDS; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91B8BB197E5CD886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetProbePuzzleResetNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetProbePuzzleResetNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_91B8BB197E5CD886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0794DFF2A1E87725(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_METHOD_3_0794DFF2A1E87725_OFFSET))(a1, a2);
		}
	};
}
