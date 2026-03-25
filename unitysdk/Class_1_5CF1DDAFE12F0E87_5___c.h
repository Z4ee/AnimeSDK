#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_65.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CF1DDAFE12F0E87_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DADA70)
#define CLASS_1_5CF1DDAFE12F0E87_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DADAB0)
#define CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x17DADAC0)
#define CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_1_OFFSET UNITYSDK_OFFSET(0x17DADAD0)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_5___c_TypeDefinitionIndex = 26715;

class Class_1_5CF1DDAFE12F0E87_5___c : public ::System::Object
{
public:
	static ::Class_1_5CF1DDAFE12F0E87_5___c** StaticGet___9()
	{
		return (::Class_1_5CF1DDAFE12F0E87_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_5___c_TypeDefinitionIndex)->GetStaticField(0x18820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__30_0(::Enum_3_0A3761FE34514D6C_65 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_65))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_65 __cctor_b__30_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_65(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_1_OFFSET))(this, x);
	}
};
