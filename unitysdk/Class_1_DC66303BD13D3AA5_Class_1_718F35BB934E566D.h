#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class Action; }

#define CLASS_1_DC66303BD13D3AA5_CLASS_1_718F35BB934E566D_METHOD_1_0C315DA60F811A93_OFFSET UNITYSDK_OFFSET(0x1AAD4760)
#define CLASS_1_DC66303BD13D3AA5_CLASS_1_718F35BB934E566D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD4750)

inline static constexpr unsigned int Class_1_DC66303BD13D3AA5_Class_1_718F35BB934E566D_TypeDefinitionIndex = 72788;

class Class_1_DC66303BD13D3AA5_Class_1_718F35BB934E566D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_718F35BB934E566D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C315DA60F811A93(::MoleMole::Config::ConfigEtherEyes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_718F35BB934E566D_METHOD_1_0C315DA60F811A93_OFFSET))(this, a1);
	}
};
