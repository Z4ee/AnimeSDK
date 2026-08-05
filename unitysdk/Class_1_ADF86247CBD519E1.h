#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAvatarGraphics; }

#define CLASS_1_ADF86247CBD519E1__CTOR_OFFSET UNITYSDK_OFFSET(0x119D44D0)

inline static constexpr unsigned int Class_1_ADF86247CBD519E1_TypeDefinitionIndex = 56357;

class Class_1_ADF86247CBD519E1 : public ::System::Object
{
public:
	::MoleMole::UIAvatarGraphics* Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_5; // 0x18
	::UnityEngine::Vector2 Field_1_7; // 0x28
	::UnityEngine::Quaternion Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADF86247CBD519E1__CTOR_OFFSET))(this);
	}
};
