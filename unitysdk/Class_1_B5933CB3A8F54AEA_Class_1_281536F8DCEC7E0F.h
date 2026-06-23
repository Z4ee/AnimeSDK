#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_281536F8DCEC7E0F_METHOD_1_DA7A1E2B82760EDC_OFFSET UNITYSDK_OFFSET(0x10675370)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_281536F8DCEC7E0F__CTOR_OFFSET UNITYSDK_OFFSET(0x10675360)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_281536F8DCEC7E0F_TypeDefinitionIndex = 55323;

class Class_1_B5933CB3A8F54AEA_Class_1_281536F8DCEC7E0F : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_281536F8DCEC7E0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA7A1E2B82760EDC(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_281536F8DCEC7E0F_METHOD_1_DA7A1E2B82760EDC_OFFSET))(this, a1);
	}
};
