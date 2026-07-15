#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Airline; }

#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x38FBDF0)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x38FBBE0)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xA4C6C0)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_E9758935FDCEBD14_OFFSET UNITYSDK_OFFSET(0x38FBC00)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_EB7F927150FED3C2_OFFSET UNITYSDK_OFFSET(0x38FBD70)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x38FBD00)
#define STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x38FBC90)

inline static constexpr unsigned int Struct_2_BBE13FFEB7E1D73E_TypeDefinitionIndex = 57123;

struct alignas(8) Struct_2_BBE13FFEB7E1D73E
{
	::RPG::Client::Airline* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::UnityEngine::Vector3 Field_2_5; // 0x38
	::UnityEngine::Quaternion Field_2_6; // 0x44

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_2_E9758935FDCEBD14(::RPG::Client::Airline* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Airline*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_E9758935FDCEBD14_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::System::Void Method_2_EB7F927150FED3C2(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_EB7F927150FED3C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBE13FFEB7E1D73E_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
