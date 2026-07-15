#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1508C710)
#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1508C610)
#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_403E554B6AF81517_OFFSET UNITYSDK_OFFSET(0x1508C7D0)
#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1508C780)
#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0x1508C6C0)
#define CLASS_1_2B5DB3011ADDA3A1_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1508C670)
#define CLASS_1_2B5DB3011ADDA3A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1508C890)

inline static constexpr unsigned int Class_1_2B5DB3011ADDA3A1_TypeDefinitionIndex = 54696;

class Class_1_2B5DB3011ADDA3A1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_D20BF56E36607D54_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_2B5DB3011ADDA3A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B5DB3011ADDA3A1*))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_403E554B6AF81517(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_1_2B5DB3011ADDA3A1_METHOD_1_403E554B6AF81517_OFFSET))(this, a1, a2);
	}
};
