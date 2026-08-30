#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_A48F3719AA1CF200_4;
class Class_3_7AA0663B46C8586F_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_476A3724FF401C4E_2_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15812690)
#define CLASS_3_476A3724FF401C4E_2_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x158122B0)
#define CLASS_3_476A3724FF401C4E_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15812300)
#define CLASS_3_476A3724FF401C4E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15812280)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_2_TypeDefinitionIndex = 53084;

class Class_3_476A3724FF401C4E_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_7*>
{
public:
	::Class_2_A48F3719AA1CF200_4* JLMAKNFAEBH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_7*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_2_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_2_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}
};
