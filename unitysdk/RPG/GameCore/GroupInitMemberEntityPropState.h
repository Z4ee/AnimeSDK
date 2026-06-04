#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_METHOD_3_7A4D24A3E51708DF_OFFSET UNITYSDK_OFFSET(0x19813E20)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_METHOD_3_EFBC9EBD04853BE1_OFFSET UNITYSDK_OFFSET(0x19813DA0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19813DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityPropState_TypeDefinitionIndex = 19590;

	class GroupInitMemberEntityPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PropInstanceID; // 0x18
		::RPG::GameCore::PropState InitPropState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFBC9EBD04853BE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_METHOD_3_EFBC9EBD04853BE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A4D24A3E51708DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_METHOD_3_7A4D24A3E51708DF_OFFSET))(a1, a2);
		}
	};
}
