#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_METHOD_3_0DC78AFC7041894D_OFFSET UNITYSDK_OFFSET(0x1882A8F0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_METHOD_3_AAE630D84E1CF774_OFFSET UNITYSDK_OFFSET(0x1882A510)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882A500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperExpCurve_TypeDefinitionIndex = 14724;

	class ComplexSkillAIMapperExpCurve : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::RPG::GameCore::FixPoint Avalue; // 0x10
		::RPG::GameCore::FixPoint Bvalue; // 0x18
		::RPG::GameCore::FixPoint Cvalue; // 0x20
		::RPG::GameCore::FixPoint Dvalue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DC78AFC7041894D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperExpCurve*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperExpCurve*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_METHOD_3_0DC78AFC7041894D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAE630D84E1CF774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperExpCurve* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperExpCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_METHOD_3_AAE630D84E1CF774_OFFSET))(a1, a2);
		}
	};
}
