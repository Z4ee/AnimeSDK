#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3784FBDE1068556E_CLASS_1_CDB16B41A655598D_METHOD_1_A30CF869F3EC4514_OFFSET UNITYSDK_OFFSET(0x11675A40)
#define CLASS_3_3784FBDE1068556E_CLASS_1_CDB16B41A655598D__CTOR_OFFSET UNITYSDK_OFFSET(0x11675A30)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_Class_1_CDB16B41A655598D_TypeDefinitionIndex = 69310;

class Class_3_3784FBDE1068556E_Class_1_CDB16B41A655598D : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_CDB16B41A655598D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A30CF869F3EC4514(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_CDB16B41A655598D_METHOD_1_A30CF869F3EC4514_OFFSET))(this, a1, a2);
	}
};
