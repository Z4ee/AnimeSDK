#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"
#include "unitysdk/System/Object.h"

class Class_1_BE29B49AC03370B6;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_18643BAA5616465D_CLASS_1_73E953EEF9237FA7_METHOD_1_F20D32506FA3D9B7_OFFSET UNITYSDK_OFFSET(0x145B6ED0)
#define CLASS_3_18643BAA5616465D_CLASS_1_73E953EEF9237FA7__CTOR_OFFSET UNITYSDK_OFFSET(0x145B6EC0)

inline static constexpr unsigned int Class_3_18643BAA5616465D_Class_1_73E953EEF9237FA7_TypeDefinitionIndex = 44675;

class Class_3_18643BAA5616465D_Class_1_73E953EEF9237FA7 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_BE29B49AC03370B6*>* Field_1_6; // 0x10
	::Struct_2_B4AA4B9F04BE3CFD Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_73E953EEF9237FA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F20D32506FA3D9B7(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_73E953EEF9237FA7_METHOD_1_F20D32506FA3D9B7_OFFSET))(this, a1);
	}
};
