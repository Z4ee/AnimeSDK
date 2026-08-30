#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAILinearItem; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_79E227FC1A99BBFE_OFFSET UNITYSDK_OFFSET(0x1D9A9AC0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_7B6CF723330572AD_OFFSET UNITYSDK_OFFSET(0x1D9A9C40)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A9AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperMultiRange_TypeDefinitionIndex = 15386;

	class ComplexSkillAIMapperMultiRange : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComplexSkillAILinearItem*>* Ranges; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B6CF723330572AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_7B6CF723330572AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79E227FC1A99BBFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_79E227FC1A99BBFE_OFFSET))(a1, a2);
		}
	};
}
