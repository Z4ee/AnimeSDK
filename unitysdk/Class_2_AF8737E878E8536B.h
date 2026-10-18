#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_AF8737E878E8536B_METHOD_2_46A7A28543076C41_OFFSET UNITYSDK_OFFSET(0xF8AB590)
#define CLASS_2_AF8737E878E8536B_METHOD_2_72B73A286FE25AE3_OFFSET UNITYSDK_OFFSET(0xF8AB010)
#define CLASS_2_AF8737E878E8536B_METHOD_2_CD7E3482DD97228D_OFFSET UNITYSDK_OFFSET(0xF8AB500)
#define CLASS_2_AF8737E878E8536B_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xF8AB690)
#define CLASS_2_AF8737E878E8536B_METHOD_2_F4A3996D27B8F20B_OFFSET UNITYSDK_OFFSET(0xF8AB6E0)
#define CLASS_2_AF8737E878E8536B__CTOR_OFFSET UNITYSDK_OFFSET(0xF8AB740)
#define CLASS_2_AF8737E878E8536B__ONBIND_OFFSET UNITYSDK_OFFSET(0xF8AAD10)

inline static constexpr unsigned int Class_2_AF8737E878E8536B_TypeDefinitionIndex = 71312;

class Class_2_AF8737E878E8536B : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* DEJCIGBKEBM; // 0x60
	::UnityEngine::UI::Image* IONEJJPBAHK; // 0x68
	::UnityEngine::Animation* OELMLGBIEKF; // 0x70
	::UnityEngine::Transform* KDOJNDJJNGM; // 0x78
	::UnityEngine::UI::Text* CPOINHOCHMN; // 0x80
	::UnityEngine::UI::Text* JHBMGKBIPJC; // 0x88
	::UnityEngine::UI::Text* AEJPECICBGN; // 0x90
	::UnityEngine::UI::Text* CEEHMOEPFMF; // 0x98
	::UnityEngine::Transform* PGMAJHPHIFM; // 0xA0
	::UnityEngine::Transform* LJBBPFPOKDE; // 0xA8
	::UnityEngine::UI::Text* ICGLFOCOEJB; // 0xB0

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
