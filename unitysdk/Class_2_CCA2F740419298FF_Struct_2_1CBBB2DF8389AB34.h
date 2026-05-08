#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_CCA2F740419298FF_STRUCT_2_1CBBB2DF8389AB34__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

inline static constexpr unsigned int Class_2_CCA2F740419298FF_Struct_2_1CBBB2DF8389AB34_TypeDefinitionIndex = 78707;

struct alignas(8) Class_2_CCA2F740419298FF_Struct_2_1CBBB2DF8389AB34
{
	::System::String* Field_2_0; // 0x10
	::System::Action* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CCA2F740419298FF_STRUCT_2_1CBBB2DF8389AB34__CTOR_OFFSET))(this, a1, a2);
	}
};
