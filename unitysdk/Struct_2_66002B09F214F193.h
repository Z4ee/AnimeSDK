#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CD3644488168ACA0.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define STRUCT_2_66002B09F214F193_METHOD_2_5DE2F71A8A6D1588_OFFSET UNITYSDK_OFFSET(0x831B60)
#define STRUCT_2_66002B09F214F193_METHOD_2_725B37A80988A1B1_OFFSET UNITYSDK_OFFSET(0x831A70)
#define STRUCT_2_66002B09F214F193_METHOD_2_DE9C4FFAA203E21F_OFFSET UNITYSDK_OFFSET(0x831B70)

inline static constexpr unsigned int Struct_2_66002B09F214F193_TypeDefinitionIndex = 74869;

struct alignas(2) Struct_2_66002B09F214F193
{
	::Struct_2_CD3644488168ACA0 Field_2_0; // 0x10
	::Struct_2_CD3644488168ACA0 Field_2_1; // 0x16

	::System::Collections::Generic::IEnumerable_1<::Struct_2_CD3644488168ACA0>* Method_2_725B37A80988A1B1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_CD3644488168ACA0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_66002B09F214F193_METHOD_2_725B37A80988A1B1_OFFSET))(this);
	}

	::System::Void Method_2_5DE2F71A8A6D1588(::System::Action_1<::Struct_2_CD3644488168ACA0>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_CD3644488168ACA0>*))((::PBYTE)hIl2Cpp + STRUCT_2_66002B09F214F193_METHOD_2_5DE2F71A8A6D1588_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_DE9C4FFAA203E21F(::System::Collections::Generic::Dictionary_2<::System::Int64, ::MoleMole::BattleMapSubsystem_BattleCellInfo>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int64, ::MoleMole::BattleMapSubsystem_BattleCellInfo>*))((::PBYTE)hIl2Cpp + STRUCT_2_66002B09F214F193_METHOD_2_DE9C4FFAA203E21F_OFFSET))(this, a1);
	}
	*/
};
