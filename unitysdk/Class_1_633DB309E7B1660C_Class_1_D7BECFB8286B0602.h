#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CampTypeConfig; }
namespace System { class Action; }

#define CLASS_1_633DB309E7B1660C_CLASS_1_D7BECFB8286B0602_METHOD_1_F4CF2EEEF145CDF8_OFFSET UNITYSDK_OFFSET(0x1423BB40)
#define CLASS_1_633DB309E7B1660C_CLASS_1_D7BECFB8286B0602__CTOR_OFFSET UNITYSDK_OFFSET(0x1423BB30)

inline static constexpr unsigned int Class_1_633DB309E7B1660C_Class_1_D7BECFB8286B0602_TypeDefinitionIndex = 52487;

class Class_1_633DB309E7B1660C_Class_1_D7BECFB8286B0602 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_CLASS_1_D7BECFB8286B0602__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F4CF2EEEF145CDF8(::MoleMole::Config::CampTypeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_CLASS_1_D7BECFB8286B0602_METHOD_1_F4CF2EEEF145CDF8_OFFSET))(this, a1);
	}
};
