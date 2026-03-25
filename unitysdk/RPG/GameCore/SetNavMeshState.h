#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNAVMESHSTATE_METHOD_3_3258037F0DBBC9CB_OFFSET UNITYSDK_OFFSET(0x176D9D30)
#define RPG_GAMECORE_SETNAVMESHSTATE_METHOD_3_7B920410862438EF_OFFSET UNITYSDK_OFFSET(0x176D9DB0)
#define RPG_GAMECORE_SETNAVMESHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D9D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNavMeshState_TypeDefinitionIndex = 20421;

	class SetNavMeshState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVMESHSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3258037F0DBBC9CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNavMeshState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNavMeshState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVMESHSTATE_METHOD_3_3258037F0DBBC9CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B920410862438EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNavMeshState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNavMeshState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVMESHSTATE_METHOD_3_7B920410862438EF_OFFSET))(a1, a2);
		}
	};
}
