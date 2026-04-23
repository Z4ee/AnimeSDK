#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_124;
class Class_1_CFBEA2D53E7F4C67;
namespace RPG::Client { class ActivitySwordTrainingExamData; }

#define CLASS_1_5EFEE08E3E11BEF1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A03280)

inline static constexpr unsigned int Class_1_5EFEE08E3E11BEF1_TypeDefinitionIndex = 57132;

class Class_1_5EFEE08E3E11BEF1 : public ::System::Object
{
public:
	::Class_1_CFBEA2D53E7F4C67* Field_1_1; // 0x10
	::Class_1_43BD383C98B4C0C5_124* Field_1_0; // 0x18
	::RPG::Client::ActivitySwordTrainingExamData* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFEE08E3E11BEF1__CTOR_OFFSET))(this);
	}
};
