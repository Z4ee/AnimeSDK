#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_B53C203ABFEE55A8_OFFSET UNITYSDK_OFFSET(0x18EE9570)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_D7F09573111D055D_OFFSET UNITYSDK_OFFSET(0x18EE9630)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillSubTarget_TypeDefinitionIndex = 23015;

	class TargetMapSkillSubTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B53C203ABFEE55A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_B53C203ABFEE55A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7F09573111D055D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_D7F09573111D055D_OFFSET))(a1, a2);
		}
	};
}
