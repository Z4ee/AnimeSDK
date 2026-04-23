#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_78CEF5203DD4B7B4_METHOD_2_0B7AE2333E75CC14_OFFSET UNITYSDK_OFFSET(0x977B5C0)
#define CLASS_2_78CEF5203DD4B7B4_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x977B730)
#define CLASS_2_78CEF5203DD4B7B4__CTOR_OFFSET UNITYSDK_OFFSET(0x977B7C0)
#define CLASS_2_78CEF5203DD4B7B4__ONBIND_OFFSET UNITYSDK_OFFSET(0x977B3E0)
#define CLASS_2_78CEF5203DD4B7B4___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x977B7F0)

inline static constexpr unsigned int Class_2_78CEF5203DD4B7B4_TypeDefinitionIndex = 66231;

class Class_2_78CEF5203DD4B7B4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::System::String* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_0; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::UnityEngine::UI::Image* Field_2_4; // 0x88
	::System::String* Field_2_7; // 0x90
	::System::String* Field_2_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0B7AE2333E75CC14(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4_METHOD_2_0B7AE2333E75CC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
