#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
namespace MoleMole { class GlobalPrepatchData; }
namespace System { class Exception; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_985FB89D66798E31__CTOR_OFFSET UNITYSDK_OFFSET(0x13284990)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31_TypeDefinitionIndex = 66455;

class Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31 : public ::System::Object
{
public:
	::MoleMole::GlobalPrepatchData* Field_1_1; // 0x10
	::System::Exception* Field_1_2; // 0x18
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_985FB89D66798E31__CTOR_OFFSET))(this);
	}
};
