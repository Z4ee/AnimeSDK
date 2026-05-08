#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3060EE23002ECA9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB5B80)

inline static constexpr unsigned int Class_1_3060EE23002ECA9E_TypeDefinitionIndex = 83753;

class Class_1_3060EE23002ECA9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*>* Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::Struct_2_4C8453486C91E3A1_15 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3060EE23002ECA9E__CTOR_OFFSET))(this);
	}
};
