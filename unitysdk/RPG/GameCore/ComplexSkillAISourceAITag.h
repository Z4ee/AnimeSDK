#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_METHOD_3_6086B73C11C6E5AA_OFFSET UNITYSDK_OFFSET(0x1882C870)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_METHOD_3_76195365D1F0B028_OFFSET UNITYSDK_OFFSET(0x1882F8D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1882C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceAITag_TypeDefinitionIndex = 14712;

	class ComplexSkillAISourceAITag : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::String* DynamicValueKey; // 0x18
		::System::Boolean StringFromParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76195365D1F0B028(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceAITag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceAITag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_METHOD_3_76195365D1F0B028_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6086B73C11C6E5AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceAITag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_METHOD_3_6086B73C11C6E5AA_OFFSET))(a1, a2);
		}
	};
}
