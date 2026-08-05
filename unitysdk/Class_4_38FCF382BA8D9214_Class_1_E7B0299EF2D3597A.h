#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_BE29B49AC03370B6;
class Class_4_38FCF382BA8D9214;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x178157C0)
#define CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A_METHOD_1_A70B309E062EF05E_OFFSET UNITYSDK_OFFSET(0x178158E0)
#define CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A__CTOR_OFFSET UNITYSDK_OFFSET(0x178157B0)

inline static constexpr unsigned int Class_4_38FCF382BA8D9214_Class_1_E7B0299EF2D3597A_TypeDefinitionIndex = 91489;

class Class_4_38FCF382BA8D9214_Class_1_E7B0299EF2D3597A : public ::System::Object
{
public:
	::Struct_2_25290555339097B0 Field_1_7; // 0x10
	::Class_4_38FCF382BA8D9214* Field_1_1; // 0x38
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x40
	::UnityEngine::GameObject* Field_1_2; // 0x70
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_5; // 0x78
	::System::Int32 Field_1_3; // 0x80
	::System::Int32 Field_1_0; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A70B309E062EF05E(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_CLASS_1_E7B0299EF2D3597A_METHOD_1_A70B309E062EF05E_OFFSET))(this, a1);
	}
};
