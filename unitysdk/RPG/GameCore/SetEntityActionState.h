#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_062AF1513F0F1659_OFFSET UNITYSDK_OFFSET(0x176CABC0)
#define RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_21493D3F5D2F5796_OFFSET UNITYSDK_OFFSET(0x176CAC40)
#define RPG_GAMECORE_SETENTITYACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CAC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityActionState_TypeDefinitionIndex = 20832;

	class SetEntityActionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean ActionState; // 0x28
		::System::Boolean CancelInsertUltra; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_062AF1513F0F1659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityActionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityActionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_062AF1513F0F1659_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21493D3F5D2F5796(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_21493D3F5D2F5796_OFFSET))(a1, a2);
		}
	};
}
