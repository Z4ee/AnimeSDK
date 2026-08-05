#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"

class Class_1_204C453CC79AE4E0_1;
namespace UnityEngine { class Transform; }

#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_708E18FEF1F1CD49_OFFSET UNITYSDK_OFFSET(0x7A6B10)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7A6C30)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x7A6D20)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x7A6CD0)

inline static constexpr unsigned int Struct_2_8F1F8F30CBE74E21_TypeDefinitionIndex = 83319;

struct alignas(8) Struct_2_8F1F8F30CBE74E21
{
	::UnityEngine::Transform* Field_2_3; // 0x10
	::Class_1_204C453CC79AE4E0_1* Field_2_2; // 0x18
	::System::Boolean Field_2_1; // 0x20
	::Foundation::Unreal::FTransform Field_2_0; // 0x24

	/*
	::UnityEngine::Quaternion Method_2_708E18FEF1F1CD49()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_708E18FEF1F1CD49_OFFSET))(this);
	}
	*/

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_D126582672457EA7(::Struct_2_CC1AD73BA07FC070 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CC1AD73BA07FC070))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_CED7A2E9A352C6FD_OFFSET))(this);
	}
	*/
};
