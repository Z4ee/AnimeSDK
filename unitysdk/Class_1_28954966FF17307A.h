#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_426;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_28954966FF17307A__CTOR_OFFSET UNITYSDK_OFFSET(0x15993080)

inline static constexpr unsigned int Class_1_28954966FF17307A_TypeDefinitionIndex = 49230;

class Class_1_28954966FF17307A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_426* Field_1_2; // 0x10
	::System::Func_2<::Struct_2_F780BA94AF5E7E37_1, ::System::Boolean>* Field_1_0; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Single Field_1_1; // 0x24
	::Struct_2_F780BA94AF5E7E37_1 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28954966FF17307A__CTOR_OFFSET))(this);
	}
};
