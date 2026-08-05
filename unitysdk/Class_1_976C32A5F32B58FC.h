#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_66C4D81440373C6E;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_976C32A5F32B58FC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1948C9E0)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1948CB30)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x1948CA40)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1948CB40)
#define CLASS_1_976C32A5F32B58FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1948CB20)

inline static constexpr unsigned int Class_1_976C32A5F32B58FC_TypeDefinitionIndex = 48925;

class Class_1_976C32A5F32B58FC : public ::System::Object
{
public:
	::Class_1_66C4D81440373C6E* Field_1_7; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::MoleMole::Config::CampType Field_1_6; // 0x20
	::System::Boolean Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::Class_1_66C4D81440373C6E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_66C4D81440373C6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_66C4D81440373C6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66C4D81440373C6E*))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
