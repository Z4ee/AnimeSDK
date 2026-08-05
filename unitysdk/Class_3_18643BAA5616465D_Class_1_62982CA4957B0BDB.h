#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"
#include "unitysdk/System/Object.h"

class Class_1_BE29B49AC03370B6;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_18643BAA5616465D_CLASS_1_62982CA4957B0BDB_METHOD_1_F1C1B0A083E17EAE_OFFSET UNITYSDK_OFFSET(0x1A55BC90)
#define CLASS_3_18643BAA5616465D_CLASS_1_62982CA4957B0BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55BC80)

inline static constexpr unsigned int Class_3_18643BAA5616465D_Class_1_62982CA4957B0BDB_TypeDefinitionIndex = 44674;

class Class_3_18643BAA5616465D_Class_1_62982CA4957B0BDB : public ::System::Object
{
public:
	::System::Action_1<::Class_1_BE29B49AC03370B6*>* Field_1_0; // 0x10
	::Struct_2_B4AA4B9F04BE3CFD Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_62982CA4957B0BDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F1C1B0A083E17EAE(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_62982CA4957B0BDB_METHOD_1_F1C1B0A083E17EAE_OFFSET))(this, a1);
	}
};
