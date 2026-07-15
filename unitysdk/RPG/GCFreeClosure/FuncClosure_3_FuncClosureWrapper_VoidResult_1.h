#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_3_FuncClosureWrapper_VoidResult_1_TypeDefinitionIndex = 6852;

	template <typename TInput0, typename TInput1, typename TInput2, typename T>
	class FuncClosure_3_FuncClosureWrapper_VoidResult_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_5<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, ::Struct_2_3906C24C646CC83F>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_5<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(FuncClosure_3_FuncClosureWrapper_VoidResult_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
