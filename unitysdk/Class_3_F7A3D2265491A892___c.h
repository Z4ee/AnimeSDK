#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F8C0583F92FF29F;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F7A3D2265491A892___C_METHOD_1_65CB1271D6AC0EBC_OFFSET UNITYSDK_OFFSET(0x13921010)
#define CLASS_3_F7A3D2265491A892___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13920FC0)
#define CLASS_3_F7A3D2265491A892___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13921000)

inline static constexpr unsigned int Class_3_F7A3D2265491A892___c_TypeDefinitionIndex = 69430;

class Class_3_F7A3D2265491A892___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_3F8C0583F92FF29F*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_3F8C0583F92FF29F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7A3D2265491A892___c_TypeDefinitionIndex)->GetStaticField(0x4E010);
	}
	static ::Class_3_F7A3D2265491A892___c** StaticGet___9()
	{
		return (::Class_3_F7A3D2265491A892___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7A3D2265491A892___c_TypeDefinitionIndex)->GetStaticField(0x4E018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F7A3D2265491A892___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7A3D2265491A892___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65CB1271D6AC0EBC(::Class_3_3F8C0583F92FF29F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3F8C0583F92FF29F*))((::PBYTE)hIl2Cpp + CLASS_3_F7A3D2265491A892___C_METHOD_1_65CB1271D6AC0EBC_OFFSET))(this, a1);
	}
};
