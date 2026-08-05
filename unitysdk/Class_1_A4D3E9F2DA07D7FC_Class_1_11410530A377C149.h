#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_11410530A377C149_METHOD_1_187C5943C29EFEA2_OFFSET UNITYSDK_OFFSET(0x17125C30)
#define CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_11410530A377C149__CTOR_OFFSET UNITYSDK_OFFSET(0x17125C20)

inline static constexpr unsigned int Class_1_A4D3E9F2DA07D7FC_Class_1_11410530A377C149_TypeDefinitionIndex = 55913;

class Class_1_A4D3E9F2DA07D7FC_Class_1_11410530A377C149 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigOverShoulderCamera*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_11410530A377C149__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_187C5943C29EFEA2(::MoleMole::Config::ConfigOverShoulderCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_CLASS_1_11410530A377C149_METHOD_1_187C5943C29EFEA2_OFFSET))(this, a1);
	}
};
