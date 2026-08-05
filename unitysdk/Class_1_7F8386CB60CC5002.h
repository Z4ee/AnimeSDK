#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_216432E2D686659F.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_7F8386CB60CC5002_METHOD_1_02F5BC1F7D8B4AB5_OFFSET UNITYSDK_OFFSET(0x1774C070)
#define CLASS_1_7F8386CB60CC5002_METHOD_1_7C6F3FC75C836168_1_OFFSET UNITYSDK_OFFSET(0x1774C450)
#define CLASS_1_7F8386CB60CC5002_METHOD_1_7C6F3FC75C836168_OFFSET UNITYSDK_OFFSET(0x1774C1A0)
#define CLASS_1_7F8386CB60CC5002_METHOD_1_F786ADE78521F1AC_OFFSET UNITYSDK_OFFSET(0x1774C540)

inline static constexpr unsigned int Class_1_7F8386CB60CC5002_TypeDefinitionIndex = 87595;

class Class_1_7F8386CB60CC5002 : public ::System::Object
{
public:
	static ::UnityEngine::Matrix4x4 Method_1_02F5BC1F7D8B4AB5(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_7F8386CB60CC5002_METHOD_1_02F5BC1F7D8B4AB5_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_7C6F3FC75C836168(::Struct_2_74C6EE564641CFF8& a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_7F8386CB60CC5002_METHOD_1_7C6F3FC75C836168_OFFSET))(a1, a2);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_7C6F3FC75C836168_1(::Struct_2_984AA94FB23486F9_2& a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_7F8386CB60CC5002_METHOD_1_7C6F3FC75C836168_1_OFFSET))(a1, a2);
	}

	static ::Struct_2_216432E2D686659F Method_1_F786ADE78521F1AC(::Struct_2_52A902145F5BE51F& a1)
	{
		return ((::Struct_2_216432E2D686659F(*)(::Struct_2_52A902145F5BE51F&))((::PBYTE)hIl2Cpp + CLASS_1_7F8386CB60CC5002_METHOD_1_F786ADE78521F1AC_OFFSET))(a1);
	}
};
