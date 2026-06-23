#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace System { class Action; }

#define CLASS_1_7DE823F9B40DDB7F_CLASS_1_00D16541AB811DF2_METHOD_1_69D09DD225B98865_OFFSET UNITYSDK_OFFSET(0x13089250)
#define CLASS_1_7DE823F9B40DDB7F_CLASS_1_00D16541AB811DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x13089240)

inline static constexpr unsigned int Class_1_7DE823F9B40DDB7F_Class_1_00D16541AB811DF2_TypeDefinitionIndex = 51154;

class Class_1_7DE823F9B40DDB7F_Class_1_00D16541AB811DF2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_CLASS_1_00D16541AB811DF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_69D09DD225B98865(::MoleMole::ConfigTimelineCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_CLASS_1_00D16541AB811DF2_METHOD_1_69D09DD225B98865_OFFSET))(this, a1);
	}
};
