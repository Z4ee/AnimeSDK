#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E620574958B4D3A7_METHOD_2_B7BC87E745BCE92A_OFFSET UNITYSDK_OFFSET(0xCBF0E40)
#define CLASS_2_E620574958B4D3A7__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF0FD0)
#define CLASS_2_E620574958B4D3A7__ONBIND_OFFSET UNITYSDK_OFFSET(0xCBF0F10)
#define CLASS_2_E620574958B4D3A7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCBF1000)

inline static constexpr unsigned int Class_2_E620574958B4D3A7_TypeDefinitionIndex = 67056;

class Class_2_E620574958B4D3A7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E620574958B4D3A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B7BC87E745BCE92A(::RPG::Client::TextID a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E620574958B4D3A7_METHOD_2_B7BC87E745BCE92A_OFFSET))(this, a1, a2);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E620574958B4D3A7__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E620574958B4D3A7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
