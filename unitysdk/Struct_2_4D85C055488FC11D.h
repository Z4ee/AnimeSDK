#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMiddleTip; }
namespace System { template <typename T> class WeakReference_1; }

#define STRUCT_2_4D85C055488FC11D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7BE580)
#define STRUCT_2_4D85C055488FC11D__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE4D0)

inline static constexpr unsigned int Struct_2_4D85C055488FC11D_TypeDefinitionIndex = 65450;

struct alignas(8) Struct_2_4D85C055488FC11D
{
	::System::WeakReference_1<::MoleMole::UIMiddleTip*>* Field_2_0; // 0x10

	::System::Void _ctor(::MoleMole::UIMiddleTip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + STRUCT_2_4D85C055488FC11D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D85C055488FC11D_DISPOSE_OFFSET))(this);
	}
};
