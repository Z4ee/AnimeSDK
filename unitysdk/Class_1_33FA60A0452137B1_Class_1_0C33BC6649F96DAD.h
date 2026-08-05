#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD_METHOD_1_2F400AF290432143_OFFSET UNITYSDK_OFFSET(0x157F49A0)
#define CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD_METHOD_1_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x157F49D0)
#define CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD__CTOR_OFFSET UNITYSDK_OFFSET(0x157F4990)

inline static constexpr unsigned int Class_1_33FA60A0452137B1_Class_1_0C33BC6649F96DAD_TypeDefinitionIndex = 91023;

class Class_1_33FA60A0452137B1_Class_1_0C33BC6649F96DAD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action_1<::System::Action*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F400AF290432143(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD_METHOD_1_2F400AF290432143_OFFSET))(this, a1);
	}

	::System::Void Method_1_34566E7905D6C48F(::Class_1_E081FCEC8F87505A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_CLASS_1_0C33BC6649F96DAD_METHOD_1_34566E7905D6C48F_OFFSET))(this, a1);
	}
};
