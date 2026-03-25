#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleComponent; }

#define CLASS_1_72B8F0CA34E4DCF6_STRUCT_2_4F175C8CB0325EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x78AC0)

inline static constexpr unsigned int Class_1_72B8F0CA34E4DCF6_Struct_2_4F175C8CB0325EB4_TypeDefinitionIndex = 56557;

struct alignas(8) Class_1_72B8F0CA34E4DCF6_Struct_2_4F175C8CB0325EB4
{
	::System::Nullable_1<::Struct_2_127EAB4936C75FCC> Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_STRUCT_2_4F175C8CB0325EB4__CTOR_OFFSET))(this, a1, a2);
	}
};
