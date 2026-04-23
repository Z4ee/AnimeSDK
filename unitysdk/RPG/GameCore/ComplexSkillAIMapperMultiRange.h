#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAILinearItem; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_57B9FDB54547F5FB_OFFSET UNITYSDK_OFFSET(0x1882A790)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_5D8FC888CF177788_OFFSET UNITYSDK_OFFSET(0x1882A920)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperMultiRange_TypeDefinitionIndex = 14723;

	class ComplexSkillAIMapperMultiRange : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComplexSkillAILinearItem*>* Ranges; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D8FC888CF177788(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_5D8FC888CF177788_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57B9FDB54547F5FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_METHOD_3_57B9FDB54547F5FB_OFFSET))(a1, a2);
		}
	};
}
