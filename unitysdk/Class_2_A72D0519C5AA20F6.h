#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167ACC80)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x167ADD90)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x167ACD50)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x167ADE00)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_FC176928A38562F2_OFFSET UNITYSDK_OFFSET(0x167AD2D0)
#define CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET UNITYSDK_OFFSET(0x167ACC70)
#define CLASS_2_A72D0519C5AA20F6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167ADD30)

inline static constexpr unsigned int Class_2_A72D0519C5AA20F6_TypeDefinitionIndex = 32937;

class Class_2_A72D0519C5AA20F6 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_E1DC3D0DDD796244* Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::System::UInt32 Field_2_5; // 0x2C
	::System::Single Field_2_3; // 0x30
	::System::Boolean Field_2_7; // 0x34
	::System::Boolean Field_2_6; // 0x35
	::System::Boolean Field_2_4; // 0x36
	::UnityEngine::Vector3 Field_2_1; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_2_FC176928A38562F2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_FC176928A38562F2_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
