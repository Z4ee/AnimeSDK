#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_21888EF85248B793;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }

#define CLASS_1_34E8F48118BB9306_METHOD_1_30D4469316B97DCE_OFFSET UNITYSDK_OFFSET(0x179C03E0)
#define CLASS_1_34E8F48118BB9306_METHOD_1_43CFB8520CB0FB12_OFFSET UNITYSDK_OFFSET(0x179BF4E0)
#define CLASS_1_34E8F48118BB9306_METHOD_1_8CD8E4A299FB4AB6_OFFSET UNITYSDK_OFFSET(0x179BF580)
#define CLASS_1_34E8F48118BB9306_METHOD_1_E629447BEACAF6CE_OFFSET UNITYSDK_OFFSET(0x179BF620)
#define CLASS_1_34E8F48118BB9306_METHOD_1_E7DD32F1A14E2E07_OFFSET UNITYSDK_OFFSET(0x179BF440)

inline static constexpr unsigned int Class_1_34E8F48118BB9306_TypeDefinitionIndex = 47099;

class Class_1_34E8F48118BB9306 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 Method_1_E7DD32F1A14E2E07(::Il2CppArray<::System::Single>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_34E8F48118BB9306_METHOD_1_E7DD32F1A14E2E07_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Single>* Method_1_43CFB8520CB0FB12(::UnityEngine::Vector3 a1)
	{
		return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_34E8F48118BB9306_METHOD_1_43CFB8520CB0FB12_OFFSET))(a1);
	}

	static ::Class_1_21888EF85248B793* Method_1_8CD8E4A299FB4AB6(::System::String* a1)
	{
		return ((::Class_1_21888EF85248B793*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34E8F48118BB9306_METHOD_1_8CD8E4A299FB4AB6_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D4469316B97DCE(::System::String* a1, ::Class_1_21888EF85248B793* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_21888EF85248B793*))((::PBYTE)hIl2Cpp + CLASS_1_34E8F48118BB9306_METHOD_1_30D4469316B97DCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E629447BEACAF6CE(::Newtonsoft::Json::Linq::JToken* a1)
	{
		return ((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + CLASS_1_34E8F48118BB9306_METHOD_1_E629447BEACAF6CE_OFFSET))(a1);
	}
};
