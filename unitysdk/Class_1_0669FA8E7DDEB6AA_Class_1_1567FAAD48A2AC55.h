#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }

#define CLASS_1_0669FA8E7DDEB6AA_CLASS_1_1567FAAD48A2AC55_METHOD_1_6EE6CBF235A4AAAC_OFFSET UNITYSDK_OFFSET(0x14BBCEA0)
#define CLASS_1_0669FA8E7DDEB6AA_CLASS_1_1567FAAD48A2AC55__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBCE90)

inline static constexpr unsigned int Class_1_0669FA8E7DDEB6AA_Class_1_1567FAAD48A2AC55_TypeDefinitionIndex = 53640;

class Class_1_0669FA8E7DDEB6AA_Class_1_1567FAAD48A2AC55 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_CLASS_1_1567FAAD48A2AC55__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EE6CBF235A4AAAC(::MoleMole::ConfigUISound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_CLASS_1_1567FAAD48A2AC55_METHOD_1_6EE6CBF235A4AAAC_OFFSET))(this, a1);
	}
};
