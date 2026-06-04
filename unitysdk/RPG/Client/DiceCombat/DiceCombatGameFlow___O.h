#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlow___O_TypeDefinitionIndex = 70679;

	class DiceCombatGameFlow___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatGameFlow___O_TypeDefinitionIndex)->GetStaticField(0x4EA0);
		}
		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__1___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatGameFlow___O_TypeDefinitionIndex)->GetStaticField(0x4EA8);
		}
	};
}
