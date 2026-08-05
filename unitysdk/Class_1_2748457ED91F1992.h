#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIWidgetController; }

#define CLASS_1_2748457ED91F1992__CTOR_OFFSET UNITYSDK_OFFSET(0x14954250)

inline static constexpr unsigned int Class_1_2748457ED91F1992_TypeDefinitionIndex = 65532;

class Class_1_2748457ED91F1992 : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* Field_1_0; // 0x10
	::Class_1_0D6706375CDAAE8C* Field_1_1; // 0x18
	::UnityEngine::Vector2 Field_1_6; // 0x20
	::UnityEngine::Vector2 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2748457ED91F1992__CTOR_OFFSET))(this);
	}
};
