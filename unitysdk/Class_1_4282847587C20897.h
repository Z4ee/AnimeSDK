#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4282847587C20897_METHOD_1_2759BB4309C451DA_OFFSET UNITYSDK_OFFSET(0x15C05C30)
#define CLASS_1_4282847587C20897_METHOD_1_416EC981AC139ADF_OFFSET UNITYSDK_OFFSET(0x15C05690)
#define CLASS_1_4282847587C20897_METHOD_1_C14CD2353CFC2AE5_OFFSET UNITYSDK_OFFSET(0x15C04E80)

inline static constexpr unsigned int Class_1_4282847587C20897_TypeDefinitionIndex = 48918;

class Class_1_4282847587C20897 : public ::System::Object
{
public:
	// static const ::System::Int32 FMPDMAIEMFM = 0x8; // 0x0

	static ::UnityEngine::Vector3 Method_1_C14CD2353CFC2AE5(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_C14CD2353CFC2AE5_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_416EC981AC139ADF(::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_1>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_1>*))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_416EC981AC139ADF_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_2759BB4309C451DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4282847587C20897_METHOD_1_2759BB4309C451DA_OFFSET))(a1, a2, a3, a4, a5);
	}
};
