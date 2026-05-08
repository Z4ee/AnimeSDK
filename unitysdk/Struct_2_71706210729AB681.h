#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/Enum_3_A5F9D77A73B25350.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_71706210729AB681_METHOD_2_139020A5FC866C47_OFFSET UNITYSDK_OFFSET(0x151393D0)
#define STRUCT_2_71706210729AB681_METHOD_2_5522831A9020AFD3_OFFSET UNITYSDK_OFFSET(0x15139520)
#define STRUCT_2_71706210729AB681_METHOD_2_C7FBCA9352389830_OFFSET UNITYSDK_OFFSET(0x15139550)
#define STRUCT_2_71706210729AB681_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79BC40)
#define STRUCT_2_71706210729AB681_METHOD_2_E80AB1AA627D5BC1_OFFSET UNITYSDK_OFFSET(0x151394F0)
#define STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x6EF870)
#define STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x5C4710)
#define STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x79BC30)
#define STRUCT_2_71706210729AB681__CCTOR_OFFSET UNITYSDK_OFFSET(0x151393C0)

inline static constexpr unsigned int Struct_2_71706210729AB681_TypeDefinitionIndex = 46934;

struct alignas(4) Struct_2_71706210729AB681
{
	static ::Struct_2_71706210729AB681* StaticGet_Field_2_3()
	{
		return (::Struct_2_71706210729AB681*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_71706210729AB681_TypeDefinitionIndex)->GetStaticField(0xCF10);
	}
	::Enum_3_A5F9D77A73B25350 Field_2_0; // 0x10
	::Dest::Math::Capsule3 Field_2_1; // 0x14
	::Dest::Math::Box3 Field_2_2; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681__CCTOR_OFFSET))();
	}

	/*
	static ::Struct_2_71706210729AB681 Method_2_139020A5FC866C47(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Struct_2_71706210729AB681(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_139020A5FC866C47_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Dest::Math::Capsule3 Method_2_E80AB1AA627D5BC1(::Struct_2_71706210729AB681& a1)
	{
		return ((::Dest::Math::Capsule3(*)(::Struct_2_71706210729AB681&))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_E80AB1AA627D5BC1_OFFSET))(a1);
	}

	static ::Dest::Math::Box3 Method_2_5522831A9020AFD3(::Struct_2_71706210729AB681& a1)
	{
		return ((::Dest::Math::Box3(*)(::Struct_2_71706210729AB681&))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_5522831A9020AFD3_OFFSET))(a1);
	}

	/*
	static ::Struct_2_71706210729AB681 Method_2_C7FBCA9352389830(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Struct_2_71706210729AB681(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_C7FBCA9352389830_OFFSET))(a1, a2, a3);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71706210729AB681_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}
};
