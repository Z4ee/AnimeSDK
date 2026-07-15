#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_1_ActionClosureWrapper_1_TypeDefinitionIndex = 6798;

	template <typename TInput0, typename T>
	class ActionClosure_1_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_2<::Struct_2_6C64084003D66585, TInput0>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_2<::Struct_2_6C64084003D66585, TInput0>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_1_ActionClosureWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
