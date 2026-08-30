#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8130CBB13F62AEE0;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8130CBB13F62AEE0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12213A90)
#define CLASS_1_8130CBB13F62AEE0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12213AC0)
#define CLASS_1_8130CBB13F62AEE0___C__GET__FIXEDUPDATEACTION_B__30_0_OFFSET UNITYSDK_OFFSET(0x12213AD0)
#define CLASS_1_8130CBB13F62AEE0___C__GET__LATEFIXEDUPDATEACTION_B__32_0_OFFSET UNITYSDK_OFFSET(0x12213AF0)

inline static constexpr unsigned int Class_1_8130CBB13F62AEE0___c_TypeDefinitionIndex = 76540;

class Class_1_8130CBB13F62AEE0___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_8130CBB13F62AEE0*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::Class_1_8130CBB13F62AEE0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8130CBB13F62AEE0___c_TypeDefinitionIndex)->GetStaticField(0x539A0);
	}
	static ::System::Action_1<::Class_1_8130CBB13F62AEE0*>** StaticGet___9__32_0()
	{
		return (::System::Action_1<::Class_1_8130CBB13F62AEE0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8130CBB13F62AEE0___c_TypeDefinitionIndex)->GetStaticField(0x539A8);
	}
	static ::Class_1_8130CBB13F62AEE0___c** StaticGet___9()
	{
		return (::Class_1_8130CBB13F62AEE0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8130CBB13F62AEE0___c_TypeDefinitionIndex)->GetStaticField(0x539B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8130CBB13F62AEE0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8130CBB13F62AEE0___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__30_0(::Class_1_8130CBB13F62AEE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8130CBB13F62AEE0*))((::PBYTE)hIl2Cpp + CLASS_1_8130CBB13F62AEE0___C__GET__FIXEDUPDATEACTION_B__30_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__32_0(::Class_1_8130CBB13F62AEE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8130CBB13F62AEE0*))((::PBYTE)hIl2Cpp + CLASS_1_8130CBB13F62AEE0___C__GET__LATEFIXEDUPDATEACTION_B__32_0_OFFSET))(this, a1);
	}
};
