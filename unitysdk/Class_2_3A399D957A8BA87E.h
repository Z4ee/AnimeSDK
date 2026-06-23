#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBE4EC615642D335.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

class Class_4_398BFA9434E23924;
class Class_4_9EA2D4034FDA0BA5;
namespace MoleMole::Arcade::CompanionProject { class CpAnimAxisInfo; }
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectMoveData; }

#define CLASS_2_3A399D957A8BA87E_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1CD55FD0)
#define CLASS_2_3A399D957A8BA87E_METHOD_2_2BD155459F30AEED_OFFSET UNITYSDK_OFFSET(0x1CD55E90)
#define CLASS_2_3A399D957A8BA87E_METHOD_2_6E567866C2EC7AA0_OFFSET UNITYSDK_OFFSET(0x1CD55840)
#define CLASS_2_3A399D957A8BA87E_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1CD556D0)
#define CLASS_2_3A399D957A8BA87E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56040)

inline static constexpr unsigned int Class_2_3A399D957A8BA87E_TypeDefinitionIndex = 89236;

class Class_2_3A399D957A8BA87E : public ::Class_1_EBE4EC615642D335
{
public:
	::Class_4_9EA2D4034FDA0BA5* Field_2_1; // 0x60
	::MoleMole::Arcade::CompanionProject::CpSkillEffectMoveData* Field_2_3; // 0x68
	::Class_4_398BFA9434E23924* Field_2_2; // 0x70
	::System::UInt32 Field_2_0; // 0x78
	::Struct_2_E614D3B245F96744_1 Field_2_4; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A399D957A8BA87E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A399D957A8BA87E_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_6E567866C2EC7AA0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A399D957A8BA87E_METHOD_2_6E567866C2EC7AA0_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A399D957A8BA87E_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::Struct_2_E614D3B245F96744 Method_2_2BD155459F30AEED(::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo* a1, ::System::Single a2)
	{
		return ((::Struct_2_E614D3B245F96744(*)(::PVOID, ::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A399D957A8BA87E_METHOD_2_2BD155459F30AEED_OFFSET))(this, a1, a2);
	}
};
