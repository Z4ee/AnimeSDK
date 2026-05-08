#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }

#define CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x14AAD490)
#define CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4_METHOD_1_8580AF855E6910BD_OFFSET UNITYSDK_OFFSET(0x14AAD3C0)
#define CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA9EE0)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_Class_1_659EC4CA22011AD4_TypeDefinitionIndex = 69309;

class Class_3_3784FBDE1068556E_Class_1_659EC4CA22011AD4 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8580AF855E6910BD(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4_METHOD_1_8580AF855E6910BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_659EC4CA22011AD4_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}
};
