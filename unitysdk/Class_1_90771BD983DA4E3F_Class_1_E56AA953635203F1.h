#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace System { class Action; }

#define CLASS_1_90771BD983DA4E3F_CLASS_1_E56AA953635203F1_METHOD_1_DAFC71D533D4060A_OFFSET UNITYSDK_OFFSET(0x11F32E10)
#define CLASS_1_90771BD983DA4E3F_CLASS_1_E56AA953635203F1__CTOR_OFFSET UNITYSDK_OFFSET(0x11F32E00)

inline static constexpr unsigned int Class_1_90771BD983DA4E3F_Class_1_E56AA953635203F1_TypeDefinitionIndex = 65551;

class Class_1_90771BD983DA4E3F_Class_1_E56AA953635203F1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_E56AA953635203F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAFC71D533D4060A(::MoleMole::MonsterSpecialIdleConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterSpecialIdleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_E56AA953635203F1_METHOD_1_DAFC71D533D4060A_OFFSET))(this, a1);
	}
};
