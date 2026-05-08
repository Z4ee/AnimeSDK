#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DC4C9967889A0B11;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F20A40F814CF92BB___C_METHOD_1_E26F7108FE020D45_OFFSET UNITYSDK_OFFSET(0x11F18820)
#define CLASS_3_F20A40F814CF92BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F187D0)
#define CLASS_3_F20A40F814CF92BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F18810)

inline static constexpr unsigned int Class_3_F20A40F814CF92BB___c_TypeDefinitionIndex = 60462;

class Class_3_F20A40F814CF92BB___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_DC4C9967889A0B11*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_DC4C9967889A0B11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F20A40F814CF92BB___c_TypeDefinitionIndex)->GetStaticField(0x397B0);
	}
	static ::Class_3_F20A40F814CF92BB___c** StaticGet___9()
	{
		return (::Class_3_F20A40F814CF92BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F20A40F814CF92BB___c_TypeDefinitionIndex)->GetStaticField(0x397B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E26F7108FE020D45(::Class_3_DC4C9967889A0B11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DC4C9967889A0B11*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB___C_METHOD_1_E26F7108FE020D45_OFFSET))(this, a1);
	}
};
