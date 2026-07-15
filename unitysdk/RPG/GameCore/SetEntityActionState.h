#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_21493D3F5D2F5796_OFFSET UNITYSDK_OFFSET(0x1C5F67F0)
#define RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_F10DAA8D1183F1DF_OFFSET UNITYSDK_OFFSET(0x1C5F67A0)
#define RPG_GAMECORE_SETENTITYACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F67E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityActionState_TypeDefinitionIndex = 21836;

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

		static ::System::Void Method_3_F10DAA8D1183F1DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityActionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityActionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_F10DAA8D1183F1DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21493D3F5D2F5796(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_METHOD_3_21493D3F5D2F5796_OFFSET))(a1, a2);
		}
	};
}
