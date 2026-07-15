#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionByRef_5; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_4_ActionClosureWrapper_TypeDefinitionIndex = 6809;

	template <typename TInput0, typename TInput1, typename TInput2, typename TInput3>
	class ActionClosure_4_ActionClosureWrapper : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_5<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_5<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_4_ActionClosureWrapper_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
