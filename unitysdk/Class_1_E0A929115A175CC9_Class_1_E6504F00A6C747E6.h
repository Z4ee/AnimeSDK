#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { class Action; }

#define CLASS_1_E0A929115A175CC9_CLASS_1_E6504F00A6C747E6_METHOD_1_37ED4915FA45759F_OFFSET UNITYSDK_OFFSET(0x131721C0)
#define CLASS_1_E0A929115A175CC9_CLASS_1_E6504F00A6C747E6__CTOR_OFFSET UNITYSDK_OFFSET(0x131721B0)

inline static constexpr unsigned int Class_1_E0A929115A175CC9_Class_1_E6504F00A6C747E6_TypeDefinitionIndex = 49940;

class Class_1_E0A929115A175CC9_Class_1_E6504F00A6C747E6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_CLASS_1_E6504F00A6C747E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_37ED4915FA45759F(::MoleMole::ConfigUINewMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUINewMap*))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_CLASS_1_E6504F00A6C747E6_METHOD_1_37ED4915FA45759F_OFFSET))(this, a1);
	}
};
