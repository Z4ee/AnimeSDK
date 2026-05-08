#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_13FEE442E6EBE447;
class Class_2_44CAFB3A09178D38_3;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { class String; }

#define CLASS_1_7FE2B84F3220F819_METHOD_1_72266CDE037E358C_OFFSET UNITYSDK_OFFSET(0xDB3A140)
#define CLASS_1_7FE2B84F3220F819_METHOD_1_CD0BDD71DE8CBD11_OFFSET UNITYSDK_OFFSET(0xDB3A7B0)
#define CLASS_1_7FE2B84F3220F819_METHOD_1_E0BE458B8AE724B4_OFFSET UNITYSDK_OFFSET(0xDB3A440)

inline static constexpr unsigned int Class_1_7FE2B84F3220F819_TypeDefinitionIndex = 58624;

class Class_1_7FE2B84F3220F819 : public ::System::Object
{
public:
	static ::System::Void Method_1_72266CDE037E358C(::Class_1_13FEE442E6EBE447* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::Class_1_13FEE442E6EBE447*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_7FE2B84F3220F819_METHOD_1_72266CDE037E358C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E0BE458B8AE724B4(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FE2B84F3220F819_METHOD_1_E0BE458B8AE724B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD0BDD71DE8CBD11(::Class_2_44CAFB3A09178D38_3* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_2_44CAFB3A09178D38_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FE2B84F3220F819_METHOD_1_CD0BDD71DE8CBD11_OFFSET))(a1, a2);
	}
};
