#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6E91DAE4D29D8ABF_METHOD_2_0447348DBA96F107_OFFSET UNITYSDK_OFFSET(0x80B8B0)
#define STRUCT_2_6E91DAE4D29D8ABF__CTOR_OFFSET UNITYSDK_OFFSET(0x765CC0)

inline static constexpr unsigned int Struct_2_6E91DAE4D29D8ABF_TypeDefinitionIndex = 75615;

struct alignas(4) Struct_2_6E91DAE4D29D8ABF
{
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6E91DAE4D29D8ABF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0447348DBA96F107(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_6E91DAE4D29D8ABF_METHOD_2_0447348DBA96F107_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
