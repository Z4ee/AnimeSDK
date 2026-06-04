#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_METHOD_3_3D20AD1DBB393454_OFFSET UNITYSDK_OFFSET(0x19BE64C0)
#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_METHOD_3_E543EC69AD8F653E_OFFSET UNITYSDK_OFFSET(0x19BE6510)
#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE6570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtComplexSkillAISource_TypeDefinitionIndex = 16764;

	class RtComplexSkillAISource : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D20AD1DBB393454(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtComplexSkillAISource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtComplexSkillAISource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_METHOD_3_3D20AD1DBB393454_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E543EC69AD8F653E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_METHOD_3_E543EC69AD8F653E_OFFSET))(a1, a2);
		}
	};
}
