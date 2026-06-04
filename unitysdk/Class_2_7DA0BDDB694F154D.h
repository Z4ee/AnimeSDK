#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"

class Class_1_43BD383C98B4C0C5_100;

#define CLASS_2_7DA0BDDB694F154D_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x18C0DBB0)
#define CLASS_2_7DA0BDDB694F154D_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18C0DB50)
#define CLASS_2_7DA0BDDB694F154D_METHOD_2_D5C07CA59BC5F063_1_OFFSET UNITYSDK_OFFSET(0x18C0DC10)
#define CLASS_2_7DA0BDDB694F154D_METHOD_2_D5C07CA59BC5F063_OFFSET UNITYSDK_OFFSET(0x18BFF6B0)
#define CLASS_2_7DA0BDDB694F154D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C0DD70)
#define CLASS_2_7DA0BDDB694F154D__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFFBB0)

inline static constexpr unsigned int Class_2_7DA0BDDB694F154D_TypeDefinitionIndex = 39156;

class Class_2_7DA0BDDB694F154D : public ::Entitas::Entity
{
public:
	static ::Class_1_43BD383C98B4C0C5_100** StaticGet_Field_2_0()
	{
		return (::Class_1_43BD383C98B4C0C5_100**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DA0BDDB694F154D_TypeDefinitionIndex)->GetStaticField(0x45A90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_D5C07CA59BC5F063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D_METHOD_2_D5C07CA59BC5F063_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_D5C07CA59BC5F063_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DA0BDDB694F154D_METHOD_2_D5C07CA59BC5F063_1_OFFSET))(this, a1);
	}
};
