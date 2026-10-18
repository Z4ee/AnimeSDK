#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_A48F3719AA1CF200_7;
class Class_3_FA3DB7B30E78C0CA_15;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_476A3724FF401C4E_1_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xDCC9920)
#define CLASS_3_476A3724FF401C4E_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCC9970)
#define CLASS_3_476A3724FF401C4E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDCC98F0)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_1_TypeDefinitionIndex = 52808;

class Class_3_476A3724FF401C4E_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_15*>
{
public:
	::Class_2_A48F3719AA1CF200_7* JLMAKNFAEBH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_15*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_7*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_1_ONTASKBEGIN_OFFSET))(this);
	}
};
