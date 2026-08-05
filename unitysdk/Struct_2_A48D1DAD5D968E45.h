#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_590214B1C850A70F.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_A48D1DAD5D968E45_METHOD_2_60447750AB3276EE_OFFSET UNITYSDK_OFFSET(0x85DC80)
#define STRUCT_2_A48D1DAD5D968E45__CTOR_OFFSET UNITYSDK_OFFSET(0x85DC70)

inline static constexpr unsigned int Struct_2_A48D1DAD5D968E45_TypeDefinitionIndex = 84358;

struct alignas(8) Struct_2_A48D1DAD5D968E45
{
	::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* Field_2_1; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*& a1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*&, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*&))((::PBYTE)hIl2Cpp + STRUCT_2_A48D1DAD5D968E45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_60447750AB3276EE(::Enum_3_590214B1C850A70F a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::Enum_3_590214B1C850A70F))((::PBYTE)hIl2Cpp + STRUCT_2_A48D1DAD5D968E45_METHOD_2_60447750AB3276EE_OFFSET))(this, a1);
	}
};
