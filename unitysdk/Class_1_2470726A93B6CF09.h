#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_1_OFFSET UNITYSDK_OFFSET(0x14413B40)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_2_OFFSET UNITYSDK_OFFSET(0x14413BF0)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_3_OFFSET UNITYSDK_OFFSET(0x14413C80)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x14413A90)
#define CLASS_1_2470726A93B6CF09__CCTOR_OFFSET UNITYSDK_OFFSET(0x14413A80)
#define CLASS_1_2470726A93B6CF09__CTOR_OFFSET UNITYSDK_OFFSET(0x14413A70)

inline static constexpr unsigned int Class_1_2470726A93B6CF09_TypeDefinitionIndex = 86633;

class Class_1_2470726A93B6CF09 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2470726A93B6CF09_TypeDefinitionIndex)->GetStaticField(0x10B30);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2470726A93B6CF09_TypeDefinitionIndex)->GetStaticField(0x10B34);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_2(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_3(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_3_OFFSET))(a1);
	}
};
