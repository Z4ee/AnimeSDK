#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_082ABE1E256C9212_OFFSET UNITYSDK_OFFSET(0x79E3C0)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x79E030)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x79E160)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x79E290)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x79E430)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_5_OFFSET UNITYSDK_OFFSET(0x79E560)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x68F870)
#define STRUCT_2_FC595D1A561D8C6F_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x79DFB0)
#define STRUCT_2_FC595D1A561D8C6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E0D650)
#define STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x361050)

inline static constexpr unsigned int Struct_2_FC595D1A561D8C6F_TypeDefinitionIndex = 79577;

struct alignas(4) Struct_2_FC595D1A561D8C6F
{
	static ::Struct_2_FC595D1A561D8C6F* StaticGet_Field_2_0()
	{
		return (::Struct_2_FC595D1A561D8C6F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FC595D1A561D8C6F_TypeDefinitionIndex)->GetStaticField(0xC450);
	}
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::UnityEngine::Quaternion Field_2_2; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::System::Single Method_2_082ABE1E256C9212()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_082ABE1E256C9212_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_METHOD_2_D37FAD0A6AA04B25_5_OFFSET))(this);
	}
};
