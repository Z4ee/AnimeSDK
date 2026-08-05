#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1E7CB9EDD620FD18;
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }

#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_0B6CF186054F96A4_METHOD_1_AA31E94E4CD07CF9_OFFSET UNITYSDK_OFFSET(0x18A4C350)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_0B6CF186054F96A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4C340)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Class_1_0B6CF186054F96A4_TypeDefinitionIndex = 87374;

class Class_1_1E7CB9EDD620FD18_Class_1_0B6CF186054F96A4 : public ::System::Object
{
public:
	::Class_1_1E7CB9EDD620FD18* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_0B6CF186054F96A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA31E94E4CD07CF9(::System::UInt32 a1, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_0B6CF186054F96A4_METHOD_1_AA31E94E4CD07CF9_OFFSET))(this, a1, a2);
	}
};
