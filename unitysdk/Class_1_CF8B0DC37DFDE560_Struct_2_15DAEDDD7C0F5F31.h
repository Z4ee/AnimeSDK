#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleComponent; }

#define CLASS_1_CF8B0DC37DFDE560_STRUCT_2_15DAEDDD7C0F5F31__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF8FA0)

inline static constexpr unsigned int Class_1_CF8B0DC37DFDE560_Struct_2_15DAEDDD7C0F5F31_TypeDefinitionIndex = 69163;

struct alignas(8) Class_1_CF8B0DC37DFDE560_Struct_2_15DAEDDD7C0F5F31
{
	::System::Nullable_1<::Struct_2_127EAB4936C75FCC> BPAPBAFOMCH; // 0x10
	::System::Int32 GDLKKJEMPON; // 0x28

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_STRUCT_2_15DAEDDD7C0F5F31__CTOR_OFFSET))(this, a1, a2);
	}
};
