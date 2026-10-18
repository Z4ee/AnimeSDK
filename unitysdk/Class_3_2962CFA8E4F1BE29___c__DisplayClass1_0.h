#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_3D58785602145ACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2962CFA8E4F1BE29___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2497B0)
#define CLASS_3_2962CFA8E4F1BE29___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB249980)

inline static constexpr unsigned int Class_3_2962CFA8E4F1BE29___c__DisplayClass1_0_TypeDefinitionIndex = 53455;

class Class_3_2962CFA8E4F1BE29___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_4_3D58785602145ACE* config; // 0x10
	::RPG::GameCore::TaskContext* context; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2962CFA8E4F1BE29___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2962CFA8E4F1BE29___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
