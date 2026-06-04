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

#define CLASS_2_25E6C4F7C3D33A00_METHOD_2_9256B4946C27AD99_OFFSET UNITYSDK_OFFSET(0xDE5B050)
#define CLASS_2_25E6C4F7C3D33A00_METHOD_2_9E1DF21E19AC7AEC_OFFSET UNITYSDK_OFFSET(0xDE5A980)
#define CLASS_2_25E6C4F7C3D33A00_METHOD_2_CD7E3482DD97228D_OFFSET UNITYSDK_OFFSET(0xDE5AED0)
#define CLASS_2_25E6C4F7C3D33A00_METHOD_2_D7BA759F99E4AE12_OFFSET UNITYSDK_OFFSET(0xDE5AF60)
#define CLASS_2_25E6C4F7C3D33A00_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xDE5B000)
#define CLASS_2_25E6C4F7C3D33A00__CTOR_OFFSET UNITYSDK_OFFSET(0xDE5B070)
#define CLASS_2_25E6C4F7C3D33A00__ONBIND_OFFSET UNITYSDK_OFFSET(0xDE5A690)
#define CLASS_2_25E6C4F7C3D33A00___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xDE5B0A0)

inline static constexpr unsigned int Class_2_25E6C4F7C3D33A00_TypeDefinitionIndex = 66660;

class Class_2_25E6C4F7C3D33A00 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_4; // 0x80
	::UnityEngine::UI::Text* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_6; // 0x90
	::UnityEngine::Animation* Field_2_7; // 0x98
	::UnityEngine::UI::Image* Field_2_8; // 0xA0
	::UnityEngine::Transform* Field_2_9; // 0xA8
	::UnityEngine::Transform* Field_2_10; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9E1DF21E19AC7AEC(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00_METHOD_2_9E1DF21E19AC7AEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_2_D7BA759F99E4AE12(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00_METHOD_2_D7BA759F99E4AE12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD7E3482DD97228D(::RPG::GameCore::EnumStatusType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00_METHOD_2_CD7E3482DD97228D_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* Method_2_9256B4946C27AD99()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00_METHOD_2_9256B4946C27AD99_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25E6C4F7C3D33A00___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
