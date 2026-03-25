#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_20.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CF1DDAFE12F0E87_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FC8120)
#define CLASS_1_5CF1DDAFE12F0E87_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC8160)
#define CLASS_1_5CF1DDAFE12F0E87_2___C___CCTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x17FC8170)
#define CLASS_1_5CF1DDAFE12F0E87_2___C___CCTOR_B__30_1_OFFSET UNITYSDK_OFFSET(0x17FC8180)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_2___c_TypeDefinitionIndex = 25200;

class Class_1_5CF1DDAFE12F0E87_2___c : public ::System::Object
{
public:
	static ::Class_1_5CF1DDAFE12F0E87_2___c** StaticGet___9()
	{
		return (::Class_1_5CF1DDAFE12F0E87_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_2___c_TypeDefinitionIndex)->GetStaticField(0x36A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__30_0(::Enum_3_4608E37A1B3D374A_20 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_20))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_2___C___CCTOR_B__30_0_OFFSET))(this, x);
	}

	::Enum_3_4608E37A1B3D374A_20 __cctor_b__30_1(::System::Int32 x)
	{
		return ((::Enum_3_4608E37A1B3D374A_20(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_2___C___CCTOR_B__30_1_OFFSET))(this, x);
	}
};
