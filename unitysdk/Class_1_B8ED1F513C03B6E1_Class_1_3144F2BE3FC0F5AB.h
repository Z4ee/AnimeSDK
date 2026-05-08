#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }

#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_3144F2BE3FC0F5AB_METHOD_1_B3D2C50AB5CFF5CB_OFFSET UNITYSDK_OFFSET(0x175963A0)
#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_3144F2BE3FC0F5AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17596390)

inline static constexpr unsigned int Class_1_B8ED1F513C03B6E1_Class_1_3144F2BE3FC0F5AB_TypeDefinitionIndex = 80752;

class Class_1_B8ED1F513C03B6E1_Class_1_3144F2BE3FC0F5AB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_3144F2BE3FC0F5AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3D2C50AB5CFF5CB(::MoleMole::ConfigUIScripts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIScripts*))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_3144F2BE3FC0F5AB_METHOD_1_B3D2C50AB5CFF5CB_OFFSET))(this, a1);
	}
};
