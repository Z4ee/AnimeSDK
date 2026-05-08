#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F83A8C99F6714E0A_Class_1_61AE483B33052410_65;
namespace MoleMole::Config { class ConfigGamepadRumble; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F83A8C99F6714E0A_CLASS_1_FE605687EAF1FDB5_METHOD_1_938429AD69C1150A_OFFSET UNITYSDK_OFFSET(0x100F13F0)
#define CLASS_1_F83A8C99F6714E0A_CLASS_1_FE605687EAF1FDB5__CTOR_OFFSET UNITYSDK_OFFSET(0x100F13E0)

inline static constexpr unsigned int Class_1_F83A8C99F6714E0A_Class_1_FE605687EAF1FDB5_TypeDefinitionIndex = 75063;

class Class_1_F83A8C99F6714E0A_Class_1_FE605687EAF1FDB5 : public ::System::Object
{
public:
	::Class_1_F83A8C99F6714E0A_Class_1_61AE483B33052410_65* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigGamepadRumble*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F83A8C99F6714E0A_CLASS_1_FE605687EAF1FDB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_938429AD69C1150A(::MoleMole::Config::ConfigGamepadRumble* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadRumble*))((::PBYTE)hIl2Cpp + CLASS_1_F83A8C99F6714E0A_CLASS_1_FE605687EAF1FDB5_METHOD_1_938429AD69C1150A_OFFSET))(this, a1);
	}
};
