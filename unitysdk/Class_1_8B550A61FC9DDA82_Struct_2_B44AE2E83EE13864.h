#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B44AE2E83EE13864_METHOD_2_805402183FCBBDCB_OFFSET UNITYSDK_OFFSET(0x7F2C00)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B44AE2E83EE13864__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_B44AE2E83EE13864_TypeDefinitionIndex = 50145;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_B44AE2E83EE13864
{
	::System::Action_1<::System::Action*>* Field_2_1; // 0x10
	::System::Action* Field_2_0; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Action*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B44AE2E83EE13864__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805402183FCBBDCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B44AE2E83EE13864_METHOD_2_805402183FCBBDCB_OFFSET))(this);
	}
};
