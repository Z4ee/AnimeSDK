#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_B4E30584ABBC2FAB_METHOD_1_D16694DEE6A41537_OFFSET UNITYSDK_OFFSET(0x18384490)
#define CLASS_1_B4E30584ABBC2FAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18384770)
#define CLASS_1_B4E30584ABBC2FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x18384480)

inline static constexpr unsigned int Class_1_B4E30584ABBC2FAB_TypeDefinitionIndex = 34049;

class Class_1_B4E30584ABBC2FAB : public ::System::Object
{
public:
	static ::Class_1_B4E30584ABBC2FAB** StaticGet_Field_1_0()
	{
		return (::Class_1_B4E30584ABBC2FAB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4E30584ABBC2FAB_TypeDefinitionIndex)->GetStaticField(0x26770);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E30584ABBC2FAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4E30584ABBC2FAB__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_D16694DEE6A41537(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_B4E30584ABBC2FAB_METHOD_1_D16694DEE6A41537_OFFSET))(this, a1);
	}
};
