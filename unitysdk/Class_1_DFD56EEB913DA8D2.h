#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_057F67F600F50994;

#define CLASS_1_DFD56EEB913DA8D2_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x11EA72B0)
#define CLASS_1_DFD56EEB913DA8D2_METHOD_1_E2CDADCAB2090CE4_OFFSET UNITYSDK_OFFSET(0x11EA6E30)
#define CLASS_1_DFD56EEB913DA8D2__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA6E20)

inline static constexpr unsigned int Class_1_DFD56EEB913DA8D2_TypeDefinitionIndex = 57351;

class Class_1_DFD56EEB913DA8D2 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_2; // 0x10
	::Class_3_057F67F600F50994* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E2CDADCAB2090CE4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2_METHOD_1_E2CDADCAB2090CE4_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}
};
