#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_B73A24DD2D769A8A_METHOD_1_5D53BF7A91D0A4C0_OFFSET UNITYSDK_OFFSET(0xF0C04F0)
#define CLASS_1_6D17A92E4F636970_CLASS_1_B73A24DD2D769A8A__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C04E0)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_B73A24DD2D769A8A_TypeDefinitionIndex = 82580;

class Class_1_6D17A92E4F636970_Class_1_B73A24DD2D769A8A : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_3; // 0x10
	::System::Action_1<::System::Int32>* Field_1_4; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_B73A24DD2D769A8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5D53BF7A91D0A4C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_B73A24DD2D769A8A_METHOD_1_5D53BF7A91D0A4C0_OFFSET))(this, a1);
	}
};
