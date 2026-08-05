#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace System { class Action; }

#define CLASS_1_3B5D702A260F9C39_CLASS_1_08F447D4AE331FF0_METHOD_1_866FD2FDC2890A59_OFFSET UNITYSDK_OFFSET(0x15980C40)
#define CLASS_1_3B5D702A260F9C39_CLASS_1_08F447D4AE331FF0__CTOR_OFFSET UNITYSDK_OFFSET(0x15980C30)

inline static constexpr unsigned int Class_1_3B5D702A260F9C39_Class_1_08F447D4AE331FF0_TypeDefinitionIndex = 70723;

class Class_1_3B5D702A260F9C39_Class_1_08F447D4AE331FF0 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_CLASS_1_08F447D4AE331FF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_866FD2FDC2890A59(::MoleMole::Config::HollowCampTypeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HollowCampTypeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_CLASS_1_08F447D4AE331FF0_METHOD_1_866FD2FDC2890A59_OFFSET))(this, a1);
	}
};
