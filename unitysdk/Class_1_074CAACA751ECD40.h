#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F434485B736353C4.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_074CAACA751ECD40_METHOD_1_2C40512484B87C65_OFFSET UNITYSDK_OFFSET(0x1EC3CA10)
#define CLASS_1_074CAACA751ECD40_METHOD_1_F270BECB815C8953_OFFSET UNITYSDK_OFFSET(0x1EC3CF50)

inline static constexpr unsigned int Class_1_074CAACA751ECD40_TypeDefinitionIndex = 44150;

class Class_1_074CAACA751ECD40 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Object*>* Method_1_2C40512484B87C65(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_074CAACA751ECD40_METHOD_1_2C40512484B87C65_OFFSET))(a1);
	}

	static ::Il2CppArray<::UnityEngine::Object*>* Method_1_F270BECB815C8953(::Il2CppArray<::UnityEngine::Object*>* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_074CAACA751ECD40_METHOD_1_F270BECB815C8953_OFFSET))(a1);
	}
};
