#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidget_TimeShowType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_C02649245A5D2626_CLASS_1_DB456A2A9684FF0D_METHOD_1_A34919C1DD40E3BB_OFFSET UNITYSDK_OFFSET(0x15535FF0)
#define CLASS_1_C02649245A5D2626_CLASS_1_DB456A2A9684FF0D__CTOR_OFFSET UNITYSDK_OFFSET(0x15535FE0)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_DB456A2A9684FF0D_TypeDefinitionIndex = 52552;

class Class_1_C02649245A5D2626_Class_1_DB456A2A9684FF0D : public ::System::Object
{
public:
	::System::Func_2<::System::Int64, ::UnityEngine::Color>* Field_1_7; // 0x10
	::System::Func_2<::System::Int64, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType>* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_DB456A2A9684FF0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A34919C1DD40E3BB(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_DB456A2A9684FF0D_METHOD_1_A34919C1DD40E3BB_OFFSET))(this, a1, a2);
	}
};
