#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_CC4E0266200BC27D;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x121FE960)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x121FE870)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x121FE970)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x121FE790)
#define CLASS_1_976C32A5F32B58FC__CTOR_OFFSET UNITYSDK_OFFSET(0x121FE950)

inline static constexpr unsigned int Class_1_976C32A5F32B58FC_TypeDefinitionIndex = 41970;

class Class_1_976C32A5F32B58FC : public ::System::Object
{
public:
	::Class_1_CC4E0266200BC27D* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::MoleMole::Config::CampType Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::Class_1_CC4E0266200BC27D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CC4E0266200BC27D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CC4E0266200BC27D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC4E0266200BC27D*))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
