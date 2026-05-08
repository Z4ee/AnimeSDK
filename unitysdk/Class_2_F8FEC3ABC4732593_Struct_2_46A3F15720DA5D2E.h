#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define CLASS_2_F8FEC3ABC4732593_STRUCT_2_46A3F15720DA5D2E__CTOR_OFFSET UNITYSDK_OFFSET(0x399A00)

inline static constexpr unsigned int Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E_TypeDefinitionIndex = 48928;

struct alignas(8) Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E
{
	::MoleMole::UIWindowController* Field_2_0; // 0x10
	::System::Action* Field_2_1; // 0x18
	::System::Action* Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_STRUCT_2_46A3F15720DA5D2E__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
