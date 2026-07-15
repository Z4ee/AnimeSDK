#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_2_ActionClosureWrapper_2_TypeDefinitionIndex = 6804;

	template <typename TInput0, typename TInput1, typename T0, typename T1>
	class ActionClosure_2_ActionClosureWrapper_2 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_3<::Struct_2_6C64084003D66585, TInput0, TInput1>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_3<::Struct_2_6C64084003D66585, TInput0, TInput1>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_2_ActionClosureWrapper_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
