#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_082ABE1E256C9212_OFFSET UNITYSDK_OFFSET(0x81F910)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x6CDA20)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x81F7E0)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x81F980)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x81FAB0)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_5_OFFSET UNITYSDK_OFFSET(0x81FBE0)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x81F630)
#define STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x81F760)
#define STRUCT_2_FC595D1A561D8C6F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x155C65F0)
#define STRUCT_2_FC595D1A561D8C6F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x4963B0)

inline static constexpr unsigned int Struct_2_FC595D1A561D8C6F_1_TypeDefinitionIndex = 61365;

struct alignas(4) Struct_2_FC595D1A561D8C6F_1
{
	static ::Struct_2_FC595D1A561D8C6F_1* StaticGet_Field_2_0()
	{
		return (::Struct_2_FC595D1A561D8C6F_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FC595D1A561D8C6F_1_TypeDefinitionIndex)->GetStaticField(0xC620);
	}
	::UnityEngine::Vector3 Field_2_7; // 0x10
	::UnityEngine::Quaternion Field_2_6; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Single Method_2_082ABE1E256C9212()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_082ABE1E256C9212_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_1_METHOD_2_D37FAD0A6AA04B25_5_OFFSET))(this);
	}
};
