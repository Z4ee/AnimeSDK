#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_A48F3719AA1CF200_4;
class Class_3_FA3DB7B30E78C0CA_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_476A3724FF401C4E_1_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x18460310)
#define CLASS_3_476A3724FF401C4E_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18460360)
#define CLASS_3_476A3724FF401C4E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184602E0)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_1_TypeDefinitionIndex = 50417;

class Class_3_476A3724FF401C4E_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_14*>
{
public:
	::Class_2_A48F3719AA1CF200_4* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_14*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1_ONTASKBEGIN_OFFSET))(this);
	}
};
