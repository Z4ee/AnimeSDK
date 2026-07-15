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

#define CLASS_2_AF8737E878E8536B_METHOD_2_46A7A28543076C41_OFFSET UNITYSDK_OFFSET(0xE4DAD70)
#define CLASS_2_AF8737E878E8536B_METHOD_2_72B73A286FE25AE3_OFFSET UNITYSDK_OFFSET(0xE4DA7E0)
#define CLASS_2_AF8737E878E8536B_METHOD_2_CD7E3482DD97228D_OFFSET UNITYSDK_OFFSET(0xE4DACE0)
#define CLASS_2_AF8737E878E8536B_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xE4DAE70)
#define CLASS_2_AF8737E878E8536B_METHOD_2_F4A3996D27B8F20B_OFFSET UNITYSDK_OFFSET(0xE4DAEC0)
#define CLASS_2_AF8737E878E8536B__CTOR_OFFSET UNITYSDK_OFFSET(0xE4DAF20)
#define CLASS_2_AF8737E878E8536B__ONBIND_OFFSET UNITYSDK_OFFSET(0xE4DA4E0)

inline static constexpr unsigned int Class_2_AF8737E878E8536B_TypeDefinitionIndex = 68096;

class Class_2_AF8737E878E8536B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::UnityEngine::UI::Image* Field_2_5; // 0x88
	::UnityEngine::UI::Text* Field_2_6; // 0x90
	::UnityEngine::UI::Text* Field_2_7; // 0x98
	::UnityEngine::UI::Text* Field_2_8; // 0xA0
	::UnityEngine::UI::Text* Field_2_9; // 0xA8
	::UnityEngine::Transform* Field_2_10; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_72B73A286FE25AE3(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B_METHOD_2_72B73A286FE25AE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_2_46A7A28543076C41(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B_METHOD_2_46A7A28543076C41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD7E3482DD97228D(::RPG::GameCore::EnumStatusType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B_METHOD_2_CD7E3482DD97228D_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* Method_2_F4A3996D27B8F20B()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8737E878E8536B_METHOD_2_F4A3996D27B8F20B_OFFSET))(this);
	}
};
