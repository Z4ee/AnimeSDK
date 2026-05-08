#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F7C5537073E374C_CLASS_1_15AFC060DAD5051B__CTOR_OFFSET UNITYSDK_OFFSET(0x143B7BF0)

inline static constexpr unsigned int Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B_TypeDefinitionIndex = 49742;

class Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_CLASS_1_15AFC060DAD5051B__CTOR_OFFSET))(this);
	}
};
