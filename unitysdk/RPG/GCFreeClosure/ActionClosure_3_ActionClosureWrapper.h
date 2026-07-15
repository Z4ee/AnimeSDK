#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_3_ActionClosureWrapper_TypeDefinitionIndex = 6806;

	template <typename TInput0, typename TInput1, typename TInput2>
	class ActionClosure_3_ActionClosureWrapper : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_4<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_4<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_3_ActionClosureWrapper_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
