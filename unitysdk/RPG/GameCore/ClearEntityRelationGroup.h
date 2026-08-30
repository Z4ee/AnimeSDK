#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP_METHOD_3_4D39AF54D2C868D1_OFFSET UNITYSDK_OFFSET(0x1E347CB0)
#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP_METHOD_3_804FDE90A7A254F2_OFFSET UNITYSDK_OFFSET(0x1E347CF0)
#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E347CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityRelationGroup_TypeDefinitionIndex = 22571;

	class ClearEntityRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D39AF54D2C868D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityRelationGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityRelationGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP_METHOD_3_4D39AF54D2C868D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_804FDE90A7A254F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP_METHOD_3_804FDE90A7A254F2_OFFSET))(a1, a2);
		}
	};
}
