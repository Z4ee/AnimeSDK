#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_2_FuncClosureWrapper_VoidResult_2_TypeDefinitionIndex = 6846;

	template <typename TInput0, typename TInput1, typename T0, typename T1>
	class FuncClosure_2_FuncClosureWrapper_VoidResult_2 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_4<::Struct_2_6C64084003D66585, TInput0, TInput1, ::Struct_2_3906C24C646CC83F>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_4<::Struct_2_6C64084003D66585, TInput0, TInput1, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(FuncClosure_2_FuncClosureWrapper_VoidResult_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
