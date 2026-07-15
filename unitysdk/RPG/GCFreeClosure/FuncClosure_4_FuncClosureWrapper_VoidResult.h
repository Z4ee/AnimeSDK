#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FuncByRef_6; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_4_FuncClosureWrapper_VoidResult_TypeDefinitionIndex = 6856;

	template <typename TInput0, typename TInput1, typename TInput2, typename TInput3>
	class FuncClosure_4_FuncClosureWrapper_VoidResult : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_6<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3, ::Struct_2_3906C24C646CC83F>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_6<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(FuncClosure_4_FuncClosureWrapper_VoidResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
