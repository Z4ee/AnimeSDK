#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT_METHOD_2_D2B0171BCBF3A4D2_OFFSET UNITYSDK_OFFSET(0x1CFF2070)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT_METHOD_2_FEF69E8D470DD6C3_OFFSET UNITYSDK_OFFSET(0x1CFF21B0)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF21A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactorGroupWeight_TypeDefinitionIndex = 15395;

	class ComplexSkillAIFactorGroupWeight : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GroupName; // 0x10
		::RPG::GameCore::FixPoint Weight; // 0x18
		::System::String* ParamString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D2B0171BCBF3A4D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT_METHOD_2_D2B0171BCBF3A4D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_FEF69E8D470DD6C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHT_METHOD_2_FEF69E8D470DD6C3_OFFSET))(a1, a2);
		}
	};
}
