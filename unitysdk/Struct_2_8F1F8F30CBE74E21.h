#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"

class Class_1_204C453CC79AE4E0_2;
namespace UnityEngine { class Transform; }

#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_708E18FEF1F1CD49_OFFSET UNITYSDK_OFFSET(0x80C830)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x80C950)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x80C9F0)
#define STRUCT_2_8F1F8F30CBE74E21_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x80C7E0)

inline static constexpr unsigned int Struct_2_8F1F8F30CBE74E21_TypeDefinitionIndex = 64969;

struct alignas(8) Struct_2_8F1F8F30CBE74E21
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::Class_1_204C453CC79AE4E0_2* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::Foundation::Unreal::FTransform Field_2_3; // 0x24

	/*
	::System::Boolean Method_2_D126582672457EA7(::Struct_2_CC1AD73BA07FC070 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CC1AD73BA07FC070))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}
	*/

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
	::UnityEngine::Vector3 Method_2_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F1F8F30CBE74E21_METHOD_2_CED7A2E9A352C6FD_OFFSET))(this);
	}
	*/
};
