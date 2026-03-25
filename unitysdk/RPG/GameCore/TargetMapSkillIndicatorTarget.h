#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_655FC2AE87489A59_OFFSET UNITYSDK_OFFSET(0x177C3990)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET UNITYSDK_OFFSET(0x177C3A50)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillIndicatorTarget_TypeDefinitionIndex = 22306;

	class TargetMapSkillIndicatorTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_655FC2AE87489A59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_655FC2AE87489A59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B501871CBD6F1EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET))(a1, a2);
		}
	};
}
