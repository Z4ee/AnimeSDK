#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhaseValueActionPairSerialization; }

#define RPG_GAMECORE_INTERSECTIONPHASESERIALIZATION_METHOD_2_0F7FE53198C17459_OFFSET UNITYSDK_OFFSET(0x18A207E0)
#define RPG_GAMECORE_INTERSECTIONPHASESERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A20920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntersectionPhaseSerialization_TypeDefinitionIndex = 18227;

	class IntersectionPhaseSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 PhaseID; // 0x10
		::Il2CppArray<::RPG::GameCore::PhaseValueActionPairSerialization*>* PhaseValueActionPairList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERSECTIONPHASESERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0F7FE53198C17459(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IntersectionPhaseSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IntersectionPhaseSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERSECTIONPHASESERIALIZATION_METHOD_2_0F7FE53198C17459_OFFSET))(a1, a2);
		}
	};
}
