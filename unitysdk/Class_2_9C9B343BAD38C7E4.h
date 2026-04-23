#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_9C9B343BAD38C7E4_METHOD_2_681989098607FC23_OFFSET UNITYSDK_OFFSET(0x9A6DCA0)
#define CLASS_2_9C9B343BAD38C7E4_METHOD_2_9256B4946C27AD99_OFFSET UNITYSDK_OFFSET(0x9A6E410)
#define CLASS_2_9C9B343BAD38C7E4_METHOD_2_CD7E3482DD97228D_OFFSET UNITYSDK_OFFSET(0x9A6E290)
#define CLASS_2_9C9B343BAD38C7E4_METHOD_2_D7BA759F99E4AE12_OFFSET UNITYSDK_OFFSET(0x9A6E320)
#define CLASS_2_9C9B343BAD38C7E4_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x9A6E3C0)
#define CLASS_2_9C9B343BAD38C7E4__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6E430)
#define CLASS_2_9C9B343BAD38C7E4__ONBIND_OFFSET UNITYSDK_OFFSET(0x9A6D9B0)
#define CLASS_2_9C9B343BAD38C7E4___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9A6E460)

inline static constexpr unsigned int Class_2_9C9B343BAD38C7E4_TypeDefinitionIndex = 65726;

class Class_2_9C9B343BAD38C7E4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_8; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_7; // 0x78
	::UnityEngine::Animation* Field_2_10; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::UnityEngine::UI::Text* Field_2_1; // 0x90
	::UnityEngine::UI::Text* Field_2_4; // 0x98
	::UnityEngine::UI::Text* Field_2_3; // 0xA0
	::UnityEngine::Transform* Field_2_9; // 0xA8
	::UnityEngine::UI::Text* Field_2_5; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_681989098607FC23(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4_METHOD_2_681989098607FC23_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_2_D7BA759F99E4AE12(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4_METHOD_2_D7BA759F99E4AE12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD7E3482DD97228D(::RPG::GameCore::EnumStatusType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4_METHOD_2_CD7E3482DD97228D_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* Method_2_9256B4946C27AD99()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4_METHOD_2_9256B4946C27AD99_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C9B343BAD38C7E4___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
