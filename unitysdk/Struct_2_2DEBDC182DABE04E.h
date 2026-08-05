#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define STRUCT_2_2DEBDC182DABE04E_EQUALS_OFFSET UNITYSDK_OFFSET(0x7468F0)
#define STRUCT_2_2DEBDC182DABE04E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7469F0)
#define STRUCT_2_2DEBDC182DABE04E__CCTOR_OFFSET UNITYSDK_OFFSET(0x116B5F40)

inline static constexpr unsigned int Struct_2_2DEBDC182DABE04E_TypeDefinitionIndex = 78355;

struct alignas(1) Struct_2_2DEBDC182DABE04E
{
	static ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::InputActionEvent>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::MoleMole::InputActionEvent>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2DEBDC182DABE04E_TypeDefinitionIndex)->GetStaticField(0x3AAB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2DEBDC182DABE04E__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::MoleMole::InputActionEvent a1, ::MoleMole::InputActionEvent a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + STRUCT_2_2DEBDC182DABE04E_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + STRUCT_2_2DEBDC182DABE04E_GETHASHCODE_OFFSET))(this, a1);
	}
};
