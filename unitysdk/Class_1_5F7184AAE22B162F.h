#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D124074481FC6447;

#define CLASS_1_5F7184AAE22B162F_METHOD_1_083FB3FDFA61DEF3_OFFSET UNITYSDK_OFFSET(0x1C688CD0)
#define CLASS_1_5F7184AAE22B162F_METHOD_1_CF5A13DE57192F07_OFFSET UNITYSDK_OFFSET(0x1C688EC0)
#define CLASS_1_5F7184AAE22B162F_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1C688E70)
#define CLASS_1_5F7184AAE22B162F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C688C50)

inline static constexpr unsigned int Class_1_5F7184AAE22B162F_TypeDefinitionIndex = 87742;

class Class_1_5F7184AAE22B162F : public ::System::Object
{
public:
	::Class_2_D124074481FC6447* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_D124074481FC6447* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D124074481FC6447*))((::PBYTE)hIl2Cpp + CLASS_1_5F7184AAE22B162F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_083FB3FDFA61DEF3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F7184AAE22B162F_METHOD_1_083FB3FDFA61DEF3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F7184AAE22B162F_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF5A13DE57192F07(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F7184AAE22B162F_METHOD_1_CF5A13DE57192F07_OFFSET))(this, a1);
	}
};
