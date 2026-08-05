#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_26.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3060EE23002ECA9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CA7F0)

inline static constexpr unsigned int Class_1_3060EE23002ECA9E_TypeDefinitionIndex = 92904;

class Class_1_3060EE23002ECA9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*>* Field_1_7; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::Struct_2_4C8453486C91E3A1_26 Field_1_0; // 0x1C
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3060EE23002ECA9E__CTOR_OFFSET))(this);
	}
};
