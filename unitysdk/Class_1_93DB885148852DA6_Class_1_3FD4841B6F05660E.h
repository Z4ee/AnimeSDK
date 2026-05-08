#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_93DB885148852DA6_CLASS_1_3FD4841B6F05660E_METHOD_1_C285C3586F0022DF_OFFSET UNITYSDK_OFFSET(0x124724E0)
#define CLASS_1_93DB885148852DA6_CLASS_1_3FD4841B6F05660E__CTOR_OFFSET UNITYSDK_OFFSET(0x124724D0)

inline static constexpr unsigned int Class_1_93DB885148852DA6_Class_1_3FD4841B6F05660E_TypeDefinitionIndex = 53460;

class Class_1_93DB885148852DA6_Class_1_3FD4841B6F05660E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_3FD4841B6F05660E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C285C3586F0022DF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_3FD4841B6F05660E_METHOD_1_C285C3586F0022DF_OFFSET))(this, a1);
	}
};
