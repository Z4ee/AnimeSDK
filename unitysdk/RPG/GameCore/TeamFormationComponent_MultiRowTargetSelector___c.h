#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10662FE0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10663010)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__PREPARE_B__8_0_OFFSET UNITYSDK_OFFSET(0x10663020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_MultiRowTargetSelector___c_TypeDefinitionIndex = 55135;

	class TeamFormationComponent_MultiRowTargetSelector___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TeamFormationComponent_MultiRowTargetSelector___c** StaticGet___9()
		{
			return (::RPG::GameCore::TeamFormationComponent_MultiRowTargetSelector___c**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent_MultiRowTargetSelector___c_TypeDefinitionIndex)->GetStaticField(0x68750);
		}
		static ::System::Comparison_1<::Class_2_BF927CBEA754F6BE*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_2_BF927CBEA754F6BE*>**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent_MultiRowTargetSelector___c_TypeDefinitionIndex)->GetStaticField(0x68758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Prepare_b__8_0(::Class_2_BF927CBEA754F6BE* a1, ::Class_2_BF927CBEA754F6BE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__PREPARE_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
