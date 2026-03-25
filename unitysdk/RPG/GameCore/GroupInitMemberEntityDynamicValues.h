#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_METHOD_3_AED621599B58995E_OFFSET UNITYSDK_OFFSET(0x1728C3C0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_METHOD_3_F3F307980CE84272_OFFSET UNITYSDK_OFFSET(0x1728C340)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1728C390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityDynamicValues_TypeDefinitionIndex = 19054;

	class GroupInitMemberEntityDynamicValues : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::RPG::GameCore::SubLevelGraphDynamicOverrideSet* InitDynamicValueSet; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3F307980CE84272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_METHOD_3_F3F307980CE84272_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AED621599B58995E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_METHOD_3_AED621599B58995E_OFFSET))(a1, a2);
		}
	};
}
