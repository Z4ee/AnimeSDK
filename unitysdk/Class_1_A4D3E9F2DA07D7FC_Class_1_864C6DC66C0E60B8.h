#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_864C6DC66C0E60B8_METHOD_1_8CBD3DD33604BF11_OFFSET UNITYSDK_OFFSET(0x17422810)
#define CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_864C6DC66C0E60B8__CTOR_OFFSET UNITYSDK_OFFSET(0x17422800)

inline static constexpr unsigned int Class_1_A4D3E9F2DA07D7FC_Class_1_864C6DC66C0E60B8_TypeDefinitionIndex = 39784;

class Class_1_A4D3E9F2DA07D7FC_Class_1_864C6DC66C0E60B8 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigOverShoulderCamera*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_864C6DC66C0E60B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CBD3DD33604BF11(::MoleMole::Config::ConfigOverShoulderCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_864C6DC66C0E60B8_METHOD_1_8CBD3DD33604BF11_OFFSET))(this, a1);
	}
};
