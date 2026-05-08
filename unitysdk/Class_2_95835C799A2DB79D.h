#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_D6CF5AFC914C2B63.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_95835C799A2DB79D_METHOD_2_34436CF5BAE74BC5_OFFSET UNITYSDK_OFFSET(0xFD26B60)
#define CLASS_2_95835C799A2DB79D_METHOD_2_92CECBA9626A797C_OFFSET UNITYSDK_OFFSET(0xFD26D70)
#define CLASS_2_95835C799A2DB79D_METHOD_2_E2D9D20A8901CE22_OFFSET UNITYSDK_OFFSET(0xFD267B0)
#define CLASS_2_95835C799A2DB79D_METHOD_2_F14ED804B27513E2_OFFSET UNITYSDK_OFFSET(0xFD26DE0)
#define CLASS_2_95835C799A2DB79D__CTOR_OFFSET UNITYSDK_OFFSET(0xFD26B10)

inline static constexpr unsigned int Class_2_95835C799A2DB79D_TypeDefinitionIndex = 54546;

class Class_2_95835C799A2DB79D : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_1; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x60
	::UnityEngine::RectTransform* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95835C799A2DB79D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2D9D20A8901CE22(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_95835C799A2DB79D_METHOD_2_E2D9D20A8901CE22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_34436CF5BAE74BC5(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_95835C799A2DB79D_METHOD_2_34436CF5BAE74BC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CECBA9626A797C(::Enum_3_D6CF5AFC914C2B63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D6CF5AFC914C2B63))((::PBYTE)hIl2Cpp + CLASS_2_95835C799A2DB79D_METHOD_2_92CECBA9626A797C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F14ED804B27513E2(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_95835C799A2DB79D_METHOD_2_F14ED804B27513E2_OFFSET))(this, a1, a2);
	}
};
