#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E620574958B4D3A7_METHOD_2_B7BC87E745BCE92A_OFFSET UNITYSDK_OFFSET(0xE59CF30)
#define CLASS_2_E620574958B4D3A7__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D0C0)
#define CLASS_2_E620574958B4D3A7__ONBIND_OFFSET UNITYSDK_OFFSET(0xE59D000)

inline static constexpr unsigned int Class_2_E620574958B4D3A7_TypeDefinitionIndex = 71694;

class Class_2_E620574958B4D3A7 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* OBGCEDPOAEF; // 0x60
	::UnityEngine::UI::Text* GEAHKAMKAOJ; // 0x68
	::UnityEngine::Animation* KCOAILOHDND; // 0x70

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
};
