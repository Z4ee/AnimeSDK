#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }

#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_7A533897FBCE1B23_METHOD_1_F4E9FD5D5CDB80A6_OFFSET UNITYSDK_OFFSET(0x1578C240)
#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_7A533897FBCE1B23__CTOR_OFFSET UNITYSDK_OFFSET(0x1578C230)

inline static constexpr unsigned int Class_1_B8ED1F513C03B6E1_Class_1_7A533897FBCE1B23_TypeDefinitionIndex = 86370;

class Class_1_B8ED1F513C03B6E1_Class_1_7A533897FBCE1B23 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_7A533897FBCE1B23__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F4E9FD5D5CDB80A6(::MoleMole::ConfigUIScripts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIScripts*))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_7A533897FBCE1B23_METHOD_1_F4E9FD5D5CDB80A6_OFFSET))(this, a1);
	}
};
