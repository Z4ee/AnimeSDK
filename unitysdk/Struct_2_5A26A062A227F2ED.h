#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5A26A062A227F2ED_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x2ACC10)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x2ACB90)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x2ACB80)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_7E4ED1AC58293EE2_OFFSET UNITYSDK_OFFSET(0x2ACC00)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x2ACBF0)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x2ACBC0)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x2ACBA0)
#define STRUCT_2_5A26A062A227F2ED_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x2ACBE0)

inline static constexpr unsigned int Struct_2_5A26A062A227F2ED_TypeDefinitionIndex = 59468;

struct alignas(4) Struct_2_5A26A062A227F2ED
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7E4ED1AC58293EE2(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_7E4ED1AC58293EE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_5A26A062A227F2ED& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5A26A062A227F2ED&))((::PBYTE)hIl2Cpp + STRUCT_2_5A26A062A227F2ED_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
