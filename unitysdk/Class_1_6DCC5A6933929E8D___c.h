#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }

#define CLASS_1_6DCC5A6933929E8D___C_METHOD_1_40D9C5B02C8C45F8_OFFSET UNITYSDK_OFFSET(0x1D857130)
#define CLASS_1_6DCC5A6933929E8D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8570E0)
#define CLASS_1_6DCC5A6933929E8D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D857120)

inline static constexpr unsigned int Class_1_6DCC5A6933929E8D___c_TypeDefinitionIndex = 93108;

class Class_1_6DCC5A6933929E8D___c : public ::System::Object
{
public:
	static ::Class_1_6DCC5A6933929E8D___c** StaticGet___9()
	{
		return (::Class_1_6DCC5A6933929E8D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DCC5A6933929E8D___c_TypeDefinitionIndex)->GetStaticField(0x52020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DCC5A6933929E8D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DCC5A6933929E8D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_40D9C5B02C8C45F8(::MoleMole::Arcade::CompanionProject::CpSkillEffectData* a1, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*))((::PBYTE)hIl2Cpp + CLASS_1_6DCC5A6933929E8D___C_METHOD_1_40D9C5B02C8C45F8_OFFSET))(this, a1, a2);
	}
};
