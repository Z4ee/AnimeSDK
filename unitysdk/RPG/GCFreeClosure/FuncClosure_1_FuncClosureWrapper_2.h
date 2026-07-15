#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_1_FuncClosureWrapper_2_TypeDefinitionIndex = 6832;

	template <typename TInput0, typename T, typename TResult>
	class FuncClosure_1_FuncClosureWrapper_2 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_3<::Struct_2_6C64084003D66585, TInput0, ::Struct_2_3906C24C646CC83F>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_3<::Struct_2_6C64084003D66585, TInput0, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(FuncClosure_1_FuncClosureWrapper_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
