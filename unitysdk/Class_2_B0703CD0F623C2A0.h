#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B0703CD0F623C2A0_METHOD_2_7B2B51636573DE02_OFFSET UNITYSDK_OFFSET(0x9769490)
#define CLASS_2_B0703CD0F623C2A0_METHOD_2_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x9769520)
#define CLASS_2_B0703CD0F623C2A0_METHOD_2_8445B418B6EDF422_OFFSET UNITYSDK_OFFSET(0x9769310)
#define CLASS_2_B0703CD0F623C2A0_METHOD_2_E7DFC7A59F4E86BD_OFFSET UNITYSDK_OFFSET(0x97691E0)
#define CLASS_2_B0703CD0F623C2A0__CTOR_OFFSET UNITYSDK_OFFSET(0x9769620)
#define CLASS_2_B0703CD0F623C2A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x9769140)
#define CLASS_2_B0703CD0F623C2A0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9769650)

inline static constexpr unsigned int Class_2_B0703CD0F623C2A0_TypeDefinitionIndex = 66647;

class Class_2_B0703CD0F623C2A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::System::Int32 Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E7DFC7A59F4E86BD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0_METHOD_2_E7DFC7A59F4E86BD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8445B418B6EDF422(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0_METHOD_2_8445B418B6EDF422_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B2B51636573DE02(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0_METHOD_2_7B2B51636573DE02_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0_METHOD_2_7E0102A7D81125F5_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0703CD0F623C2A0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
