#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"

class Class_1_43BD383C98B4C0C5_91;

#define CLASS_2_6DF7001559D3575B_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x17DECDD0)
#define CLASS_2_6DF7001559D3575B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17DECBF0)
#define CLASS_2_6DF7001559D3575B_METHOD_2_C8C45D7F685B757B_1_OFFSET UNITYSDK_OFFSET(0x17DECE40)
#define CLASS_2_6DF7001559D3575B_METHOD_2_C8C45D7F685B757B_OFFSET UNITYSDK_OFFSET(0x17DECC60)
#define CLASS_2_6DF7001559D3575B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DED030)
#define CLASS_2_6DF7001559D3575B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DECFB0)

inline static constexpr unsigned int Class_2_6DF7001559D3575B_TypeDefinitionIndex = 38389;

class Class_2_6DF7001559D3575B : public ::Entitas::Entity
{
public:
	static ::Class_1_43BD383C98B4C0C5_91** StaticGet_Field_2_0()
	{
		return (::Class_1_43BD383C98B4C0C5_91**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6DF7001559D3575B_TypeDefinitionIndex)->GetStaticField(0x110C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_C8C45D7F685B757B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B_METHOD_2_C8C45D7F685B757B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_C8C45D7F685B757B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6DF7001559D3575B_METHOD_2_C8C45D7F685B757B_1_OFFSET))(this, a1);
	}
};
