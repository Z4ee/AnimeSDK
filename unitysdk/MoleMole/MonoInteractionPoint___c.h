#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class InteractionPoint; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOINTERACTIONPOINT___C_METHOD_1_E6A3DB74FD95A566_OFFSET UNITYSDK_OFFSET(0x15B3E550)
#define MOLEMOLE_MONOINTERACTIONPOINT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B3E500)
#define MOLEMOLE_MONOINTERACTIONPOINT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3E540)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInteractionPoint___c_TypeDefinitionIndex = 71326;

	class MonoInteractionPoint___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(MonoInteractionPoint___c_TypeDefinitionIndex)->GetStaticField(0x41D70);
		}
		static ::MoleMole::MonoInteractionPoint___c** StaticGet___9()
		{
			return (::MoleMole::MonoInteractionPoint___c**)Il2CppClass::FromTypeDefinitionIndex(MonoInteractionPoint___c_TypeDefinitionIndex)->GetStaticField(0x41D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_E6A3DB74FD95A566(::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single> a1, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C_METHOD_1_E6A3DB74FD95A566_OFFSET))(this, a1, a2);
		}
	};
}
