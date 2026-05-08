#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace System { class Action; }

#define CLASS_1_3B5D702A260F9C39_CLASS_1_3B0BE41257072D52_METHOD_1_7AED2F967741641E_OFFSET UNITYSDK_OFFSET(0x144171E0)
#define CLASS_1_3B5D702A260F9C39_CLASS_1_3B0BE41257072D52__CTOR_OFFSET UNITYSDK_OFFSET(0x144171D0)

inline static constexpr unsigned int Class_1_3B5D702A260F9C39_Class_1_3B0BE41257072D52_TypeDefinitionIndex = 80277;

class Class_1_3B5D702A260F9C39_Class_1_3B0BE41257072D52 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_CLASS_1_3B0BE41257072D52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AED2F967741641E(::MoleMole::Config::HollowCampTypeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HollowCampTypeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_CLASS_1_3B0BE41257072D52_METHOD_1_7AED2F967741641E_OFFSET))(this, a1);
	}
};
