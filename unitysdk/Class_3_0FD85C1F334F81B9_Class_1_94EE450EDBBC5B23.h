#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_0FD85C1F334F81B9_CLASS_1_94EE450EDBBC5B23_METHOD_1_83C54DB8A4354EB1_OFFSET UNITYSDK_OFFSET(0x159D9180)
#define CLASS_3_0FD85C1F334F81B9_CLASS_1_94EE450EDBBC5B23__CTOR_OFFSET UNITYSDK_OFFSET(0x159D9160)

inline static constexpr unsigned int Class_3_0FD85C1F334F81B9_Class_1_94EE450EDBBC5B23_TypeDefinitionIndex = 48143;

class Class_3_0FD85C1F334F81B9_Class_1_94EE450EDBBC5B23 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_CLASS_1_94EE450EDBBC5B23__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_83C54DB8A4354EB1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_CLASS_1_94EE450EDBBC5B23_METHOD_1_83C54DB8A4354EB1_OFFSET))(this, a1);
	}
};
