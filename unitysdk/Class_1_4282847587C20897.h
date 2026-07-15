#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_4282847587C20897_METHOD_1_1E9EB97EB3B93949_OFFSET UNITYSDK_OFFSET(0x152C08F0)
#define CLASS_1_4282847587C20897_METHOD_1_2759BB4309C451DA_OFFSET UNITYSDK_OFFSET(0x152C2A40)
#define CLASS_1_4282847587C20897_METHOD_1_40267679F19C8492_OFFSET UNITYSDK_OFFSET(0x152C09B0)
#define CLASS_1_4282847587C20897_METHOD_1_4218F211050E7877_OFFSET UNITYSDK_OFFSET(0x152C1100)

inline static constexpr unsigned int Class_1_4282847587C20897_TypeDefinitionIndex = 47100;

class Class_1_4282847587C20897 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0

	static ::System::Void Method_1_1E9EB97EB3B93949(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_1E9EB97EB3B93949_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_40267679F19C8492(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_40267679F19C8492_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_2759BB4309C451DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_2759BB4309C451DA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4218F211050E7877(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_4218F211050E7877_OFFSET))(a1, a2, a3);
	}
};
