#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86AA8F306FA75018;
namespace MoleMole { class UIBossIllustratedBookDetailWidgetController; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_840F376370B38899__CTOR_OFFSET UNITYSDK_OFFSET(0x133B61C0)

inline static constexpr unsigned int Class_1_840F376370B38899_TypeDefinitionIndex = 67782;

class Class_1_840F376370B38899 : public ::System::Object
{
public:
	::Class_1_86AA8F306FA75018* Field_1_1; // 0x10
	::System::Action_3<::UnityEngine::RectTransform*, ::System::Int32, ::MoleMole::UIBossIllustratedBookDetailWidgetController*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_840F376370B38899__CTOR_OFFSET))(this);
	}
};
