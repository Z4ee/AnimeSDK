#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_A48F3719AA1CF200_4;
class Class_3_FA3DB7B30E78C0CA_16;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_476A3724FF401C4E_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1849AE40)
#define CLASS_3_476A3724FF401C4E_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1849ABF0)
#define CLASS_3_476A3724FF401C4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1849AC40)
#define CLASS_3_476A3724FF401C4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1849ABC0)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_TypeDefinitionIndex = 53081;

class Class_3_476A3724FF401C4E : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_16*>
{
public:
	::Class_2_A48F3719AA1CF200_4* JLMAKNFAEBH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_16*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}
};
