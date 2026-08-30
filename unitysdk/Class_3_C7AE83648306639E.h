#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorCustomValue_1.h"
#include "unitysdk/Struct_2_F58FBBBFAD28B36A.h"

namespace RPG::GameCore { class FloorTargetAgentConfig; }

#define CLASS_3_C7AE83648306639E_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x15A892C0)
#define CLASS_3_C7AE83648306639E__CTOR_OFFSET UNITYSDK_OFFSET(0x15A89290)

inline static constexpr unsigned int Class_3_C7AE83648306639E_TypeDefinitionIndex = 62173;

class Class_3_C7AE83648306639E : public ::RPG::Client::FloorCustomValue_1<::Struct_2_F58FBBBFAD28B36A>
{
public:
	::System::Void _ctor(::RPG::GameCore::FloorTargetAgentConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C7AE83648306639E__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::Struct_2_F58FBBBFAD28B36A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F58FBBBFAD28B36A))((::PBYTE)hIl2Cpp + CLASS_3_C7AE83648306639E_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
