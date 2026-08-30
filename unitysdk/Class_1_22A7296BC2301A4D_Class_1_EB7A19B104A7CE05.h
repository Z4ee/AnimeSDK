#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageBattleEventRow; }

#define CLASS_1_22A7296BC2301A4D_CLASS_1_EB7A19B104A7CE05_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x162134F0)
#define CLASS_1_22A7296BC2301A4D_CLASS_1_EB7A19B104A7CE05__CTOR_OFFSET UNITYSDK_OFFSET(0x16212450)

inline static constexpr unsigned int Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05_TypeDefinitionIndex = 56391;

class Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05 : public ::System::Object
{
public:
	::RPG::GameCore::StageBattleEventRow* FDKPNKAGNFO; // 0x10
	::System::Int32 AHADHGCOFGI; // 0x18
	::System::Int32 HIJFONCLIEC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_CLASS_1_EB7A19B104A7CE05__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_CLASS_1_EB7A19B104A7CE05_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
