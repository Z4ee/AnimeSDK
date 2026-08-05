#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_606D5F46CB5A2580.h"
#include "unitysdk/Struct_2_96AF1FF555C6D2CD.h"
#include "unitysdk/System/Object.h"

class Class_2_785FDC7D0DA58280;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }

#define CLASS_1_EBE4EC615642D335_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1D84E510)
#define CLASS_1_EBE4EC615642D335_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D84E570)
#define CLASS_1_EBE4EC615642D335__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84E500)

inline static constexpr unsigned int Class_1_EBE4EC615642D335_TypeDefinitionIndex = 93012;

class Class_1_EBE4EC615642D335 : public ::System::Object
{
public:
	::Class_2_785FDC7D0DA58280* Field_1_2; // 0x10
	::Struct_2_96AF1FF555C6D2CD Field_1_3; // 0x18
	::MoleMole::Arcade::CompanionProject::CpSkillEffectData* Field_1_0; // 0x48
	::Struct_2_606D5F46CB5A2580 Field_1_1; // 0x50
	::System::Boolean Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
