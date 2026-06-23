#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_E49B99468FA26AB2_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B8C8F1EAD31AFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD2620)

inline static constexpr unsigned int Class_1_4B8C8F1EAD31AFFF_TypeDefinitionIndex = 69337;

class Class_1_4B8C8F1EAD31AFFF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E49B99468FA26AB2_1*>* Field_1_1; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Int32 Field_1_2; // 0x20
	::MoleMole::Config::BuddyTeamType Field_1_5; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B8C8F1EAD31AFFF__CTOR_OFFSET))(this);
	}
};
