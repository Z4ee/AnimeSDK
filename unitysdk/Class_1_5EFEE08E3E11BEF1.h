#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_149;
class Class_1_CFBEA2D53E7F4C67;
namespace RPG::Client { class ActivitySwordTrainingExamData; }

#define CLASS_1_5EFEE08E3E11BEF1__CTOR_OFFSET UNITYSDK_OFFSET(0x176EB910)

inline static constexpr unsigned int Class_1_5EFEE08E3E11BEF1_TypeDefinitionIndex = 62023;

class Class_1_5EFEE08E3E11BEF1 : public ::System::Object
{
public:
	::Class_1_CFBEA2D53E7F4C67* AHJAKPGEIKH; // 0x10
	::Class_1_43BD383C98B4C0C5_149* PPBCGLJNFBL; // 0x18
	::RPG::Client::ActivitySwordTrainingExamData* JLGMOEDGOEB; // 0x20
	::System::Boolean LAJOJDBILNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFEE08E3E11BEF1__CTOR_OFFSET))(this);
	}
};
